#include "nic.h"

void nic_setup_buffers(void)
{
}
void nic_cleanup_buffers(void)
{
}
void nic_register_handler(Handler handler, void *handler_param)
{
}
void nic_unregister_handler(void)
{
}

void nic_hw_get_mac_addr(void __iomem *reg_base, unsigned char addr[6])
{
	int i;
	unsigned char temp_addr[6];
	for (i = 0; i < 6; i++)
	{
		temp_addr[i] = ioread8(reg_base + MAC_ADDR_REG_START + i);
	}

	addr[0] = temp_addr[3];
	addr[1] = temp_addr[2];
	addr[2] = temp_addr[1];
	addr[3] = temp_addr[0];
	addr[4] = temp_addr[5];
	addr[5] = temp_addr[4];
}

void nic_hw_enable_intr(void)
{
}
void nic_hw_disable_intr(void)
{
}
void nic_hw_init(void)
{
}
void nic_hw_shut(void)
{
}

int nic_hw_tx_pkt(struct sk_buff *skb)
{
	dev_kfree_skb(skb);
	return 0;
}
struct sk_buff *nic_hw_rx_pkt(void)
{
	return NULL;
}
