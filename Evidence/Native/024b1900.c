/* IL2CPP: Dino.BusSand.View.GarageView$$Update
void Dino_BusSand_View_GarageView__Update (Dino_BusSand_View_GarageView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.GarageView$$Update
   void Dino_BusSand_View_GarageView__Update (Dino_BusSand_View_GarageView_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_View_GarageView__Update_23b1900(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if ((bRam0000000004f9c971 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cbc250);
    bRam0000000004f9c971 = 1;
  }
  fVar6 = (float)UnityEngine_Time__get_deltaTime_43cd5e8(0);
  fVar8 = 1.0;
  if (0.0 <= *(float *)(param_1 + 0x4c)) {
    fVar10 = *(float *)(param_1 + 0x4c) + fVar6 / _UNK_00e2098c;
    *(float *)(param_1 + 0x4c) = fVar10;
    fVar9 = 1.0;
    if (fVar10 <= 1.0) {
      fVar9 = fVar10;
    }
    fVar7 = 0.0;
    if (0.0 <= fVar10) {
      fVar7 = fVar9;
    }
    if (fVar7 < 1.0) {
      fVar8 = (float)func_0x049b5300(1.0 - fVar7,0x40400000);
      fVar8 = 1.0 - fVar8;
    }
    if (1.0 <= fVar10) {
      *(undefined4 *)(param_1 + 0x4c) = 0xbf800000;
    }
  }
  fVar9 = fVar8;
  if (0.0 < *(float *)(param_1 + 0x44)) {
    fVar10 = *(float *)(param_1 + 0x44) + fVar6 * -4.0;
    fVar9 = 0.0;
    if (0.0 <= fVar10) {
      fVar9 = fVar10;
    }
    fVar10 = fVar9 * _UNK_00e2082c;
    *(float *)(param_1 + 0x44) = fVar9;
    fVar10 = (float)func_0x049b5320(fVar10);
    fVar9 = fVar8 * (fVar10 * _UNK_00e20174 + 1.0);
    fVar8 = fVar8 * (1.0 - fVar10 * _UNK_00e20174);
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (0.0 <= *(float *)(param_1 + 0x48)) {
    fVar10 = fVar6 / _UNK_00e2094c + *(float *)(param_1 + 0x48);
    *(float *)(param_1 + 0x48) = fVar10;
    fVar6 = 0.0;
    if (0.0 <= 1.0 - fVar10) {
      fVar6 = 1.0 - fVar10;
    }
    if (1.0 <= fVar10) {
      lVar5 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      puVar1 = PTR_DAT_04ca9ae8;
      uVar4 = 0;
      if ((bRam0000000004fa8603 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04ca9ae8,0);
        bRam0000000004fa8603 = 1;
        uVar4 = extraout_x1;
      }
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        uVar4 = extraout_x1_00;
      }
      puVar1 = PTR_DAT_04cf6418;
      if ((bRam0000000004fa8602 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf6418,uVar4);
        FUN_02132f7c(PTR_DAT_04ca9ae8);
        bRam0000000004fa8602 = 1;
      }
      if (*(long *)(*(long *)puVar1 + 0x38) == 0) {
        FUN_0216b4cc();
      }
      uVar4 = 0;
      if (lVar5 != 0) {
        uVar4 = *(undefined8 *)(lVar5 + 0x10);
      }
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (pcRam0000000004fa8680 == (code *)0x0) {
        pcRam0000000004fa8680 = (code *)FUN_02132f40(&UNK_00e39909);
      }
                    /* WARNING: Could not recover jumptable at 0x044c80c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam0000000004fa8680)(0,uVar4);
      return;
    }
    fVar8 = fVar8 * fVar6;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    fVar9 = fVar9 * *(float *)(param_1 + 0x40);
    UnityEngine_Transform__set_localScale_43d1be0
              (fVar9,fVar8 * *(float *)(param_1 + 0x40),fVar9,*(long *)(param_1 + 0x28),0);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar2 & 1) != 0) {
      lVar5 = *(long *)(param_1 + 0x38);
      if (*(int *)(*(long *)PTR_DAT_04cbc250 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* try { // try from 024b1ac0 to 025b1eab has its CatchHandler @ 024b1ac0
                       catch() { ... } // from try @ 024b1ac0 with catch @ 024b1ac0
                       catch() { ... } // from try @ 024b1eb4 with catch @ 024b1ac0
                       catch() { ... } // from try @ 024b2478 with catch @ 024b1ac0
                       catch() { ... } // from try @ 024b249c with catch @ 024b1ac0 */
      Dino_BusSand_View_StageLayout__get_FacingRotation_23e8a38(0);
      if (lVar5 == 0) goto LAB_024b1c08;
      UnityEngine_Transform__set_rotation_43d13f8(lVar5,0);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x50);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
    if ((uVar2 & 1) == 0) {
      return;
    }
    if (*(long *)(param_1 + 0x50) != 0) {
      uVar4 = UnityEngine_Transform__get_parent_43d0d70(*(long *)(param_1 + 0x50),0);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
      if ((uVar2 & 1) == 0) {
        return;
      }
      if (*(long *)(param_1 + 0x50) != 0) {
        lVar5 = UnityEngine_Transform__get_parent_43d0d70(*(long *)(param_1 + 0x50),0);
        puVar1 = PTR_DAT_04cbc250;
        lVar3 = *(long *)PTR_DAT_04cbc250;
        if (*(int *)(lVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar3);
          lVar3 = *(long *)puVar1;
        }
        UnityEngine_Quaternion__Internal_FromEulerRad_43af004
                  (**(float **)(lVar3 + 0xb8) * _UNK_00e205cc,0);
        if (lVar5 != 0) {
          if ((bRam0000000004fa8b38 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7a00,0);
            bRam0000000004fa8b38 = 1;
          }
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar5 = *(long *)(lVar5 + 0x10);
          if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
          }
          if (pcRam0000000004fa8bc0 == (code *)0x0) {
            pcRam0000000004fa8bc0 = (code *)FUN_02132f40(&UNK_00e2b2f8);
          }
          (*pcRam0000000004fa8bc0)(lVar5,&stack0xffffffffffffffd0);
          return;
        }
      }
    }
  }
LAB_024b1c08:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

