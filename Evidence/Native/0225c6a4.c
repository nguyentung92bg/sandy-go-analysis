/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Label
System_String_o* Dino_BusSand_App_QaPilot_Runner__Label (UnityEngine_Transform_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x047d488c) */
/* WARNING: Removing unreachable block (ram,0x047d490c) */
/* WARNING: Removing unreachable block (ram,0x047d48ac) */
/* IL2CPP: Dino.BusSand.App.QaPilot.Runner$$Label
   System_String_o* Dino_BusSand_App_QaPilot_Runner__Label (UnityEngine_Transform_o* t, const
   MethodInfo* method); */

long Dino_BusSand_App_QaPilot_Runner__Label_215c6a4(long param_1)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar10;
  undefined *puVar9;
  
  if ((bRam0000000004f9b7fc & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabe08);
                    /* try { // try from 0225c6cc to 0235c6d3 has its CatchHandler @ 0225c708 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
                    /* try { // try from 0225c6d4 to 0235c723 has its CatchHandler @ 0225c608 */
    FUN_02132f7c(PTR_DAT_04cabe10);
    FUN_02132f7c(PTR_DAT_04cabe18);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9b7fc = 1;
  }
  puVar9 = PTR_DAT_04ca9ae8;
  if (param_1 != 0) {
                    /* catch() { ... } // from try @ 0225c6cc with catch @ 0225c708 */
    plVar2 = (long *)UnityEngine_Component__GetComponentInChildren_object__26f9b94
                               (param_1,0,*(undefined8 *)PTR_DAT_04cabe08);
    if (*(int *)(*(long *)puVar9 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)puVar9);
    }
    uVar3 = UnityEngine_Object__op_Equality_43c6f30(plVar2,0,0);
    if ((uVar3 & 1) != 0) {
      return *(long *)PTR_DAT_04ca9c30;
    }
    if (plVar2 != (long *)0x0) {
      lVar4 = (**(code **)(*plVar2 + 0x508))(plVar2,*(undefined8 *)(*plVar2 + 0x510));
      puVar9 = PTR_DAT_04ca9c30;
      lVar10 = *(long *)PTR_DAT_04ca9c30;
      lVar5 = lVar10;
      if (lVar4 != 0) {
        lVar5 = lVar4;
      }
      if (*(int *)(*(long *)PTR_DAT_04cabe10 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar10 = *(long *)puVar9;
      }
      lVar5 = System_Text_RegularExpressions_Regex__Replace_3fbc9e4
                        (lVar5,*(undefined8 *)PTR_DAT_04cabe18,lVar10,0);
      if ((lVar5 != 0) && (lVar5 = System_String__Trim_46d6ee0(lVar5,0), lVar5 != 0)) {
        if (*(int *)(lVar5 + 0x10) < 0x21) {
          return lVar5;
        }
        iVar1 = *(int *)(lVar5 + 0x10);
        if (iVar1 < 0) {
          thunk_FUN_021985a8(PTR_DAT_04cbe6f8,0,0x20,0);
          uVar6 = thunk_FUN_0216e89c();
          uVar7 = thunk_FUN_021985a8(PTR_DAT_04cbfe80);
          puVar9 = PTR_DAT_04d0b4a0;
        }
        else {
          if (-1 < iVar1 + -0x20) {
            if (iVar1 == 0x20) {
              return lVar5;
            }
            lVar4 = thunk_FUN_0216c29c(0x20);
            if (lVar4 != 0) {
              System_Buffer__Memmove_485a338(lVar4 + 0x14,lVar5 + 0x14,0x40,0);
              return lVar4;
            }
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          thunk_FUN_021985a8(PTR_DAT_04cbe6f8,0,0x20,0);
          uVar6 = thunk_FUN_0216e89c();
          uVar7 = thunk_FUN_021985a8(PTR_DAT_04cc3fb0);
          puVar9 = PTR_DAT_04d0b4a8;
        }
        uVar8 = thunk_FUN_021985a8(puVar9);
        System_ArgumentOutOfRangeException___ctor_47b3440(uVar6,uVar7,uVar8,0);
        uVar7 = thunk_FUN_021985a8(PTR_DAT_04d0b4b0);
                    /* WARNING: Subroutine does not return */
        FUN_021330e8(uVar6,uVar7);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

