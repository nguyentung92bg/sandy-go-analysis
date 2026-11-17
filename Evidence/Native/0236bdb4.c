/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$get_R
System_Random_o* Dino_BusSand_App_Meta_PlayerIdentity__get_R (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.PlayerIdentity$$get_R
   System_Random_o* Dino_BusSand_App_Meta_PlayerIdentity__get_R (const MethodInfo* method); */

long Dino_BusSand_App_Meta_PlayerIdentity__get_R_226bdb4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04cae570;
  if ((bRam0000000004f9c0bb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cae570);
    bRam0000000004f9c0bb = 1;
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  lVar4 = *(long *)(lVar2 + 0xb8);
  lVar3 = *(long *)(lVar4 + 8);
  if (lVar3 == 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar4 = *(long *)(*(long *)puVar1 + 0xb8);
    }
    lVar3 = *(long *)(lVar4 + 0x10);
  }
  return lVar3;
}

