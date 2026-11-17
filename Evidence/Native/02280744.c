/* IL2CPP: Dino.BusSand.App.UI.BoosterFly.<>c__DisplayClass9_0$$<Fly>b__0
void Dino_BusSand_App_UI_BoosterFly___c__DisplayClass9_0___Fly_b__0 (Dino_BusSand_App_UI_BoosterFly___c__DisplayClass9_0_o* __this, float t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BoosterFly.<>c__DisplayClass9_0$$<Fly>b__0
   void Dino_BusSand_App_UI_BoosterFly___c__DisplayClass9_0___Fly_b__0
   (Dino_BusSand_App_UI_BoosterFly___c__DisplayClass9_0_o* __this, float t, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_BoosterFly___c__DisplayClass9_0___Fly_b__0_2180744
               (float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b924 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    bRam0000000004f9b924 = 1;
  }
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
  fVar10 = _UNK_00e2065c;
  if ((uVar2 & 1) != 0) {
    return;
  }
  param_1 = *(float *)(param_2 + 0x18) * param_1;
  if (param_1 < _UNK_00e2065c) {
    if (*(long *)(param_2 + 0x10) != 0) {
      UnityEngine_Transform__set_localPosition_43cfda8
                (*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20),0,
                 *(long *)(param_2 + 0x10),0);
      lVar4 = *(long *)(param_2 + 0x10);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_UI_UiMotion__OutBack_2287cfc(param_1 / fVar10,_UNK_00e20090,0);
      if (lVar4 != 0) {
        if ((bRam0000000004fa8b3e & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7a00,0);
          bRam0000000004fa8b3e = 1;
        }
        if (lVar4 != 0) {
          lVar4 = *(long *)(lVar4 + 0x10);
          if (lVar4 != 0) {
            if (pcRam0000000004fa8bf0 == (code *)0x0) {
              pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
            }
            (*pcRam0000000004fa8bf0)(lVar4,&stack0xffffffffffffffd4);
            return;
          }
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
    }
    goto LAB_02280b48;
  }
  if (_UNK_00e208d0 <= param_1) {
                    /* try { // try from 022809dc to 02380c53 has its CatchHandler @ 02280c88 */
    if (*(long *)(param_2 + 0x10) == 0) goto LAB_02280b48;
    fVar10 = param_1 + _UNK_00e207d4 + _UNK_00e1ffc0;
    fVar10 = fVar10 + fVar10;
    fVar7 = fVar10 * fVar10 * (fVar10 * _UNK_00e20440 + _UNK_00e20590);
    fVar6 = 1.0 - fVar7;
    fVar9 = fVar7 * (fVar6 + fVar6);
    fVar8 = (float)((ulong)*(undefined8 *)(param_2 + 0x24) >> 0x20) * fVar6 * fVar6 +
            (float)((ulong)*(undefined8 *)(param_2 + 0x30) >> 0x20) * fVar9 +
            (float)((ulong)*(undefined8 *)(param_2 + 0x38) >> 0x20) * fVar7 * fVar7;
    UnityEngine_Transform__set_localPosition_43cfda8
              (CONCAT44(fVar8,(float)*(undefined8 *)(param_2 + 0x24) * fVar6 * fVar6 +
                              (float)*(undefined8 *)(param_2 + 0x30) * fVar9 +
                              (float)*(undefined8 *)(param_2 + 0x38) * fVar7 * fVar7),fVar8,0,
               *(long *)(param_2 + 0x10),0);
    lVar4 = *(long *)(param_2 + 0x10);
    if (lVar4 == 0) goto LAB_02280b48;
    fVar6 = 1.0;
    if (fVar7 <= 1.0) {
      fVar6 = fVar7;
    }
    fVar8 = 0.0;
    if (0.0 <= fVar7) {
      fVar8 = fVar6;
    }
    fVar6 = fVar8 * (*(float *)(param_2 + 0x40) + _UNK_00e208d4) + _UNK_00e20998;
    fVar10 = (float)func_0x049b5320(fVar10 * _UNK_00e2082c);
    fVar10 = fVar10 * _UNK_00e208cc * fVar7 + 1.0;
    UnityEngine_Transform__set_localScale_43d1be0(fVar6 / fVar10,fVar10 * fVar6,0x3f800000,lVar4,0);
  }
  else {
    lVar4 = *(long *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 0x1c);
    fVar10 = (param_1 + _UNK_00e207d4) / _UNK_00e201f4;
    uVar12 = *(undefined8 *)(param_2 + 0x24);
    if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar6 = (float)Dino_BusSand_App_UI_UiMotion__OutCubic_2287f20(fVar10,0);
    if (lVar4 == 0) goto LAB_02280b48;
    fVar8 = 1.0;
    if (fVar6 <= 1.0) {
      fVar8 = fVar6;
    }
    fVar11 = (float)uVar5;
    fVar7 = (float)((ulong)uVar5 >> 0x20);
    fVar9 = 0.0;
    if (0.0 <= fVar6) {
      fVar9 = fVar8;
    }
    fVar7 = fVar7 + ((float)((ulong)uVar12 >> 0x20) - fVar7) * fVar9;
    UnityEngine_Transform__set_localPosition_43cfda8
              (CONCAT44(fVar7,fVar11 + ((float)uVar12 - fVar11) * fVar9),fVar7,lVar4,0);
    lVar4 = *(long *)(param_2 + 0x10);
                    /* try { // try from 0228094c to 023809db has its CatchHandler @ 0228094c
                       catch() { ... } // from try @ 0228094c with catch @ 0228094c
                       catch() { ... } // from try @ 02280c54 with catch @ 0228094c */
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    if (lVar4 == 0) goto LAB_02280b48;
    fVar6 = 1.0;
    if (fVar10 <= 1.0) {
      fVar6 = fVar10;
    }
    lVar3 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
    fVar8 = _UNK_00e1ffc4;
    if (0.0 <= fVar10) {
      fVar8 = fVar6 * _UNK_00e202c0 + _UNK_00e1ffc4;
    }
    UnityEngine_Transform__set_localScale_43d1be0
              (fVar8 * *(float *)(lVar3 + 0xc),fVar8 * *(float *)(lVar3 + 0x10),
               fVar8 * *(float *)(lVar3 + 0x14),lVar4,0);
  }
  lVar4 = *(long *)(param_2 + 0x10);
  UnityEngine_Quaternion__Internal_FromEulerRad_43af004(0,0);
  if (lVar4 != 0) {
    if ((bRam0000000004fa8b3a & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7a00,0);
      bRam0000000004fa8b3a = 1;
    }
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + 0x10);
      if (lVar4 != 0) {
        if (pcRam0000000004fa8bd0 == (code *)0x0) {
          pcRam0000000004fa8bd0 = (code *)FUN_02132f40(&UNK_00e520b7);
        }
        (*pcRam0000000004fa8bd0)(lVar4,&stack0xffffffffffffffd0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_02280b48:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

