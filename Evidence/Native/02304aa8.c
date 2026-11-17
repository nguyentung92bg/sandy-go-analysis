/* IL2CPP: Dino.BusSand.App.Meta.Economy$$ReviveBuses
int32_t Dino_BusSand_App_Meta_Economy__ReviveBuses (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Economy$$ReviveBuses
   int32_t Dino_BusSand_App_Meta_Economy__ReviveBuses (const MethodInfo* method); */

undefined4 Dino_BusSand_App_Meta_Economy__ReviveBuses_2204aa8(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  
  puVar1 = PTR_DAT_04cabaf8;
  if ((bRam0000000004f9bcc4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac440);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9bcc4 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar2 = *(long *)puVar1;
  }
  puVar1 = PTR_DAT_04cac440;
  lVar2 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x10);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x6c) == *(int *)(lVar2 + 0x14)) {
      iVar6 = *(int *)(lVar2 + 0x68);
    }
    else {
      iVar6 = 0;
    }
    lVar2 = *(long *)PTR_DAT_04cac440;
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar2 = *(long *)puVar1;
    }
    lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0x18) != 0) {
        uVar5 = *(undefined4 *)(lVar3 + 0x20);
        lVar3 = 8;
        do {
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar2 = *(long *)puVar1;
          }
          lVar4 = **(long **)(lVar2 + 0xb8);
          if (lVar4 == 0) goto LAB_02304c34;
          uVar7 = lVar3 - 8;
          if ((long)*(int *)(lVar4 + 0x18) <= (long)uVar7) {
            return uVar5;
          }
          if (*(int *)(lVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar2 = *(long *)puVar1;
            lVar4 = **(long **)(lVar2 + 0xb8);
            if (lVar4 == 0) goto LAB_02304c34;
          }
          if (*(uint *)(lVar4 + 0x18) <= uVar7) break;
          if (*(int *)(lVar4 + lVar3 * 4) <= iVar6) {
            if (*(int *)(lVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
              lVar2 = *(long *)puVar1;
            }
            lVar4 = *(long *)(*(long *)(lVar2 + 0xb8) + 8);
            if (lVar4 == 0) goto LAB_02304c34;
            if (*(uint *)(lVar4 + 0x18) <= uVar7) break;
            uVar5 = *(undefined4 *)(lVar4 + lVar3 * 4);
          }
          lVar3 = lVar3 + 1;
        } while( true );
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_02304c34:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

