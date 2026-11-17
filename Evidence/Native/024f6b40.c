/* IL2CPP: Dino.BusSand.View.VehicleView$$SetMode
void Dino_BusSand_View_VehicleView__SetMode (Dino_BusSand_View_VehicleView_o* __this, int32_t m, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.VehicleView$$SetMode
   void Dino_BusSand_View_VehicleView__SetMode (Dino_BusSand_View_VehicleView_o* __this, int32_t m,
   const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__SetMode_23f6b40(long param_1,uint param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if ((bRam0000000004f9caeb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9caeb = 1;
  }
  puVar2 = PTR_DAT_04ca9ae8;
  *(uint *)(param_1 + 0x2c) = param_2;
  if (*(char *)(param_1 + 0xe1) == '\0') {
    if (*(char *)(param_1 + 0xe0) == '\0') {
      lVar4 = *(long *)(param_1 + 0x48);
      if (*(char *)(param_1 + 0xb8) == '\0') {
        if ((lVar4 == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0), lVar4 == 0))
        goto LAB_024f6f60;
        UnityEngine_GameObject__SetActive_43c1408(lVar4,param_2 != 4,0);
                    /* try { // try from 024f6ea0 to 025f6eab has its CatchHandler @ 024f7194 */
        if ((*(long *)(param_1 + 0x50) == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x50),0),
           lVar4 == 0)) goto LAB_024f6f60;
        UnityEngine_GameObject__SetActive_43c1408(lVar4,param_2 == 4,0);
                    /* try { // try from 024f6ec8 to 025f6ecf has its CatchHandler @ 024f7018 */
        if ((*(long *)(param_1 + 0x60) == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x60),0),
           lVar4 == 0)) goto LAB_024f6f60;
                    /* try { // try from 024f6edc to 025f6ee3 has its CatchHandler @ 024f7010 */
        UnityEngine_GameObject__SetActive_43c1408(lVar4,param_2 == 4,0);
                    /* try { // try from 024f6ee4 to 025f6eef has its CatchHandler @ 024f7014 */
      }
      else {
        if ((lVar4 == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0), lVar4 == 0))
        goto LAB_024f6f60;
        UnityEngine_GameObject__SetActive_43c1408(lVar4,1,0);
        if (param_2 == 4) {
          uVar7 = *(undefined8 *)(param_1 + 200);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
                    /* try { // try from 024f6e20 to 025f6e47 has its CatchHandler @ 024f71ec */
          uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
          if (((uVar5 & 1) != 0) && (-1 < *(int *)(param_1 + 0xd0))) {
            uVar1 = *(undefined1 *)(param_1 + 0x28);
            uVar9 = *(undefined4 *)(param_1 + 0x178);
            uVar10 = *(undefined4 *)(param_1 + 0x17c);
            if (*(int *)(*(long *)PTR_DAT_04cb6dd0 + 0xe4) == 0) {
                    /* try { // try from 024f6e54 to 025f6e5b has its CatchHandler @ 024f71e0 */
              thunk_FUN_0218fdac();
            }
                    /* try { // try from 024f6e5c to 025f6e63 has its CatchHandler @ 024f718c */
            uVar7 = Dino_BusSand_View_MaterialLibrary__Glass_23bb2e4(uVar9,uVar10,uVar1,0);
            *(undefined8 *)(param_1 + 200) = uVar7;
                    /* try { // try from 024f6e78 to 025f6e8f has its CatchHandler @ 024f7188 */
LAB_024f6f50:
            thunk_FUN_02134474(param_1 + 200,uVar7);
            Dino_BusSand_View_VehicleView__ApplyAuthoredMaterials_23f9e48(param_1);
          }
        }
        else if (param_2 != 3) {
          uVar7 = *(undefined8 *)(param_1 + 200);
                    /* try { // try from 024f6efc to 025f6f07 has its CatchHandler @ 024f700c */
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
                    /* try { // try from 024f6f10 to 025f6f1b has its CatchHandler @ 024f6ffc */
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
                    /* try { // try from 024f6f20 to 025f6f37 has its CatchHandler @ 024f7004 */
          if ((param_2 != 5) && ((uVar5 & 1) != 0)) {
            uVar7 = *(undefined8 *)(param_1 + 200);
            if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
              thunk_FUN_0218fdac();
            }
                    /* try { // try from 024f6f38 to 025f6f47 has its CatchHandler @ 024f7000 */
            UnityEngine_Object__Destroy_43c8114(uVar7,0);
            uVar7 = 0;
            *(undefined8 *)(param_1 + 200) = 0;
            goto LAB_024f6f50;
          }
        }
      }
    }
  }
  else if ((bool)*(char *)(param_1 + 0x134) != (param_2 == 4)) {
    *(bool *)(param_1 + 0x134) = param_2 == 4;
    Dino_BusSand_View_VehicleView__ApplyPackColors_23f770c(param_1);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x68),0);
    if ((param_2 < 2) && (*(char *)(param_1 + 0x30) == '\0')) {
      bVar3 = *(char *)(param_1 + 0x2dd) == '\0';
    }
    else {
      bVar3 = false;
    }
    if (lVar4 != 0) {
      UnityEngine_GameObject__SetActive_43c1408(lVar4,bVar3,0);
      uVar7 = *(undefined8 *)(param_1 + 0x80);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
      if ((uVar5 & 1) != 0) {
        if ((*(long *)(param_1 + 0x80) == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x80),0),
           lVar4 == 0)) goto LAB_024f6f60;
        UnityEngine_GameObject__SetActive_43c1408
                  (lVar4,*(char *)(param_1 + 0x30) != '\0' && param_2 < 2,0);
      }
      lVar4 = 0xac;
      if (1 < param_2 - 3) {
        lVar4 = 0xa8;
      }
      *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + lVar4);
      if (param_2 == 2) {
        *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0xa8);
      }
      lVar4 = *(long *)(param_1 + 0x40);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      if (lVar4 != 0) {
        fVar8 = *(float *)(param_1 + 0xb0);
        lVar6 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
        UnityEngine_Transform__set_localScale_43d1be0
                  (fVar8 * *(float *)(lVar6 + 0xc),fVar8 * *(float *)(lVar6 + 0x10),
                   *(float *)(lVar6 + 0x14) * fVar8,lVar4,0);
        if ((*(char *)(param_1 + 0xe1) != '\0') && (*(float *)(param_1 + 0x29c) < 0.0)) {
          uVar7 = *(undefined8 *)(param_1 + 0x78);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
          if ((uVar5 & 1) != 0) {
            if (*(long *)(param_1 + 0x78) == 0) goto LAB_024f6f60;
            fVar8 = *(float *)(param_1 + 0xb0);
            UnityEngine_Transform__set_localScale_43d1be0
                      (fVar8 * *(float *)(param_1 + 0x38c),fVar8 * *(float *)(param_1 + 0x390),
                       *(float *)(param_1 + 0x394) * fVar8,*(long *)(param_1 + 0x78),0);
          }
        }
        uVar7 = *(undefined8 *)(param_1 + 0x88);
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
        if ((param_2 != 4) && ((uVar5 & 1) != 0)) {
          if ((*(long *)(param_1 + 0x88) == 0) ||
             (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x88),0),
             lVar4 == 0)) goto LAB_024f6f60;
          UnityEngine_GameObject__SetActive_43c1408(lVar4,0,0);
        }
        lVar4 = UnityEngine_Component__get_gameObject_43bcde8(param_1,0);
        if (lVar4 != 0) {
          bVar3 = param_2 != 3 && param_2 != 5;
                    /* try { // try from 024f6db4 to 025f6ddb has its CatchHandler @ 024f71f0 */
          if ((bRam0000000004fa8360 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf5bd0,bVar3,0);
            bRam0000000004fa8360 = 1;
          }
          if (lVar4 != 0) {
            lVar6 = *(long *)(lVar4 + 0x10);
            if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
            }
            if (pcRam0000000004fa8430 == (code *)0x0) {
              pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
            }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8430)(lVar6,bVar3);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
      }
    }
  }
LAB_024f6f60:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

