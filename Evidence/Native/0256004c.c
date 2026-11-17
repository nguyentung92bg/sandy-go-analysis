/* IL2CPP: Dino.GameCommon.RemoveLevelPayload$$get_Default
Dino_GameCommon_RemoveLevelPayload_o* Dino_GameCommon_RemoveLevelPayload__get_Default (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.GameCommon.RemoveLevelPayload$$get_Default
   Dino_GameCommon_RemoveLevelPayload_o* Dino_GameCommon_RemoveLevelPayload__get_Default (const
   MethodInfo* method); */

long Dino_GameCommon_RemoveLevelPayload__get_Default_246004c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  puVar2 = PTR_DAT_04cc0980;
  puVar1 = PTR_DAT_04cc0978;
  if ((bRam0000000004f9ce19 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cc0988);
    FUN_02132f7c(PTR_DAT_04cc0980);
    FUN_02132f7c(PTR_DAT_04cc0978);
    bRam0000000004f9ce19 = 1;
  }
  lVar3 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Object___ctor_4870e5c(lVar3,0);
  lVar5 = *(long *)puVar2;
  lVar4 = *(long *)(lVar5 + 0x38);
  if (lVar4 == 0) {
    FUN_0216b4cc(lVar5);
    lVar4 = *(long *)(lVar5 + 0x38);
  }
  lVar4 = *(long *)(lVar4 + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0216b470();
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_0216b470();
  }
  puVar1 = PTR_DAT_04cc0988;
  if (lVar3 != 0) {
    *(undefined8 *)(lVar3 + 0x10) = **(undefined8 **)(lVar4 + 0xb8);
    thunk_FUN_02134474();
    lVar5 = *(long *)puVar1;
    lVar4 = *(long *)(lVar5 + 0x38);
    if (lVar4 == 0) {
      FUN_0216b4cc(lVar5);
      lVar4 = *(long *)(lVar5 + 0x38);
    }
    lVar4 = *(long *)(lVar4 + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0216b470();
    }
    if (*(int *)(lVar4 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    lVar4 = *(long *)(*(long *)(lVar5 + 0x38) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_0216b470();
    }
    *(undefined8 *)(lVar3 + 0x18) = **(undefined8 **)(lVar4 + 0xb8);
    thunk_FUN_02134474();
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

