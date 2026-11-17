/* IL2CPP: Dino.BusSand.App.Meta.Profile$$Count
int64_t Dino_BusSand_App_Meta_Profile__Count (int32_t id, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Profile$$Count
   int64_t Dino_BusSand_App_Meta_Profile__Count (int32_t id, const MethodInfo* method); */

long Dino_BusSand_App_Meta_Profile__Count_225b150(int param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9c0f9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c0f9 = 1;
  }
  iVar2 = *(int *)(*(long *)puVar1 + 0xe4);
  if (param_1 == 0x3ea) {
    if (iVar2 == 0) {
      thunk_FUN_0218fdac();
    }
    iVar2 = Dino_BusSand_App_Meta_Profile__get_Hearts_22724e0();
    lVar3 = (long)iVar2;
  }
  else if (param_1 == 0x3e9) {
    if (iVar2 == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b894 == '\0') {
      FUN_02132f7c(PTR_DAT_04cabaf8);
      cRam0000000004f9b894 = '\x01';
    }
    lVar3 = *(long *)puVar1;
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    lVar3 = *(long *)(lVar3 + 0x18);
  }
  else {
    if (iVar2 == 0) {
      thunk_FUN_0218fdac();
    }
    lVar4 = Dino_BusSand_App_Meta_Profile__Find_227215c(param_1);
    lVar3 = 0;
    if (lVar4 != 0) {
      lVar3 = *(long *)(lVar4 + 0x18);
    }
  }
  return lVar3;
}

