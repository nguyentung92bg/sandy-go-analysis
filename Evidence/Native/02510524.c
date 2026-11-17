/* IL2CPP: Dino.BusSand.Core.LevelCatalog$$FileFor
System_String_o* Dino_BusSand_Core_LevelCatalog__FileFor (int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.LevelCatalog$$FileFor
   System_String_o* Dino_BusSand_Core_LevelCatalog__FileFor (int32_t level, const MethodInfo*
   method); */

undefined8 Dino_BusSand_Core_LevelCatalog__FileFor_2410524(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  
  puVar4 = PTR_DAT_04cb1868;
  if ((bRam0000000004f9cb40 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1868);
    FUN_02132f7c(PTR_DAT_04caba60);
    FUN_02132f7c(PTR_DAT_04cb4190);
    bRam0000000004f9cb40 = 1;
  }
  if (*(int *)(*(long *)puVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_Core_LevelCatalog__Ensure_240fb0c();
  lVar7 = *(long *)puVar4;
  if (param_1 < 2) {
    param_1 = 1;
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar7);
    lVar7 = *(long *)puVar4;
  }
  plVar8 = *(long **)(lVar7 + 0xb8);
  lVar5 = *plVar8;
  if (lVar5 != 0) {
    if (*(int *)(lVar5 + 0x18) < param_1) {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar7);
        plVar8 = *(long **)(*(long *)puVar4 + 0xb8);
        lVar5 = *plVar8;
        if (lVar5 == 0) goto LAB_0251064c;
      }
      iVar1 = (*(uint *)(lVar5 + 0x18) - (int)plVar8[1]) + 1;
      param_1 = param_1 + ~*(uint *)(lVar5 + 0x18);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = param_1 / iVar1;
      }
      param_1 = (int)plVar8[1] + (param_1 - iVar2 * iVar1);
      uVar6 = *(undefined8 *)PTR_DAT_04cb4190;
    }
    else {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar7);
        lVar5 = **(long **)(*(long *)puVar4 + 0xb8);
        if (lVar5 == 0) goto LAB_0251064c;
      }
      uVar6 = *(undefined8 *)PTR_DAT_04cb4190;
    }
    uVar3 = param_1 - 1;
    if (*(uint *)(lVar5 + 0x18) <= uVar3) {
      System_ThrowHelper__ThrowArgumentOutOfRange_IndexException_48509f0(0,uVar3,uVar6);
    }
    lVar7 = *(long *)(lVar5 + 0x10);
    if (lVar7 != 0) {
      if (uVar3 < *(uint *)(lVar7 + 0x18)) {
        return *(undefined8 *)(lVar7 + (long)(int)uVar3 * 8 + 0x20);
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_0251064c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

