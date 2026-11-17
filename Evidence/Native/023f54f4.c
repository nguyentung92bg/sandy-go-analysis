/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$Dispose
void Dino_BusSand_App_UI_HomeToonRig__Dispose (Dino_BusSand_App_UI_HomeToonRig_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeToonRig$$Dispose
   void Dino_BusSand_App_UI_HomeToonRig__Dispose (Dino_BusSand_App_UI_HomeToonRig_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HomeToonRig__Dispose_22f54f4(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  
  puVar1 = PTR_DAT_04cb6dd8;
  if ((bRam0000000004f9c47c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dd8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c47c = 1;
  }
  plVar2 = (long *)FUN_02133068(*(undefined8 *)puVar1,2);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar6 = *(long *)(param_1 + 0x38);
  if ((lVar6 != 0) &&
     (lVar3 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_023f56ac:
    uVar5 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar5,0);
  }
  if ((int)plVar2[3] != 0) {
    plVar2[4] = lVar6;
    thunk_FUN_02134474(plVar2 + 4,lVar6);
    lVar6 = *(long *)(param_1 + 0x40);
    if ((lVar6 != 0) &&
       (lVar3 = thunk_FUN_0216e7a0(lVar6,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
    goto LAB_023f56ac;
    puVar1 = PTR_DAT_04ca9ae8;
    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
      plVar2[5] = lVar6;
      thunk_FUN_02134474(plVar2 + 5,lVar6);
      if (0 < (int)plVar2[3]) {
        uVar7 = 0;
        uVar4 = plVar2[3] & 0xffffffff;
        do {
          if (uVar4 <= uVar7) goto LAB_023f56a8;
          lVar6 = plVar2[uVar7 + 4];
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar6,0,0);
          if ((uVar4 & 1) != 0) {
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
            UnityEngine_Object__Destroy_43c8114(lVar6,0);
          }
          uVar4 = (ulong)*(uint *)(plVar2 + 3);
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)*(uint *)(plVar2 + 3));
      }
      uVar5 = *(undefined8 *)(param_1 + 0xa0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
      if ((uVar7 & 1) != 0) {
        lVar6 = *(long *)(param_1 + 0xa0);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar1 = PTR_DAT_04ca9ae8;
        uVar5 = 0;
        if ((bRam0000000004fa8603 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04ca9ae8,0);
          bRam0000000004fa8603 = 1;
          uVar5 = extraout_x1;
        }
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          uVar5 = extraout_x1_00;
        }
        puVar1 = PTR_DAT_04cf6418;
        if ((bRam0000000004fa8602 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf6418,uVar5);
          FUN_02132f7c(PTR_DAT_04ca9ae8);
          bRam0000000004fa8602 = 1;
        }
        if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
          FUN_0216b4cc();
        }
        uVar5 = 0;
        if (lVar6 != 0) {
          uVar5 = *(undefined8 *)(lVar6 + 0x10);
        }
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (pcRam0000000004fa8680 == (code *)0x0) {
          pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
        }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8680)(0,uVar5);
        return;
      }
      return;
    }
  }
LAB_023f56a8:
                    /* WARNING: Subroutine does not return */
  FUN_0213322c();
}

