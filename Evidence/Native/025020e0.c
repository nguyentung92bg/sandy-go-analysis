/* IL2CPP: Dino.BusSand.View.WorldView$$set_Tunnel
void Dino_BusSand_View_WorldView__set_Tunnel (Dino_BusSand_View_WorldView_o* __this, UnityEngine_Transform_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.WorldView$$set_Tunnel
   void Dino_BusSand_View_WorldView__set_Tunnel (Dino_BusSand_View_WorldView_o* __this,
   UnityEngine_Transform_o* value, const MethodInfo* method); */

void Dino_BusSand_View_WorldView__set_Tunnel_24020e0(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + 0x28);
  *puVar1 = param_2;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar1 >> 0xc & 0x3f),
                 ((ulong)puVar1 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

