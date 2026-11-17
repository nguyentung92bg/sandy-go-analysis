/* IL2CPP: Dino.BusSand.App.Meta.Profile$$get_Hearts
int32_t Dino_BusSand_App_Meta_Profile__get_Hearts (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$get_Hearts
   int32_t Dino_BusSand_App_Meta_Profile__get_Hearts (const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_Profile__get_Hearts_22724e0(void)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0fe & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0fe = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_Meta_Profile__RegenHearts_227157c();
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    return *(undefined4 *)(lVar2 + 0x28);
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

