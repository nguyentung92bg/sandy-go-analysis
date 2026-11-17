/* IL2CPP: Dino.BusSand.App.Meta.Profile$$get_D
Dino_BusSand_App_Meta_PlayerData_o* Dino_BusSand_App_Meta_Profile__get_D (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$get_D
   Dino_BusSand_App_Meta_PlayerData_o* Dino_BusSand_App_Meta_Profile__get_D (const MethodInfo*
   method); */

undefined8 Dino_BusSand_App_Meta_Profile__get_D_226f568(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0e0 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0e0 = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  return *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 0x10);
}

