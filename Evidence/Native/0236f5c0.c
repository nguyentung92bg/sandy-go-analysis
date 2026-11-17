/* IL2CPP: Dino.BusSand.App.Meta.Profile$$set_D
void Dino_BusSand_App_Meta_Profile__set_D (Dino_BusSand_App_Meta_PlayerData_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$set_D
   void Dino_BusSand_App_Meta_Profile__set_D (Dino_BusSand_App_Meta_PlayerData_o* value, const
   MethodInfo* method); */

void Dino_BusSand_App_Meta_Profile__set_D_226f5c0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0e1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0e1 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  puVar3 = (undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
  *puVar3 = param_1;
  if (iRam00000000051c1b10 != 0) {
    FUN_02220bf0(1L << ((ulong)puVar3 >> 0xc & 0x3f),
                 ((ulong)puVar3 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
  }
  return;
}

