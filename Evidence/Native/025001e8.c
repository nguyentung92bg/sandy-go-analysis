/* IL2CPP: Dino.BusSand.View.VehicleView$$TickBump
void Dino_BusSand_View_VehicleView__TickBump (Dino_BusSand_View_VehicleView_o* __this, float dt, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024f6e00) */
/* WARNING: Removing unreachable block (ram,0x024f6e14) */
/* WARNING: Removing unreachable block (ram,0x024f6e18) */
/* WARNING: Removing unreachable block (ram,0x024f6e2c) */
/* WARNING: Removing unreachable block (ram,0x024f6e34) */
/* WARNING: Removing unreachable block (ram,0x024f6e54) */
/* WARNING: Removing unreachable block (ram,0x024f6e58) */
/* WARNING: Removing unreachable block (ram,0x024f6c6c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.View.VehicleView$$TickBump
   void Dino_BusSand_View_VehicleView__TickBump (Dino_BusSand_View_VehicleView_o* __this, float dt,
   const MethodInfo* method); */

void Dino_BusSand_View_VehicleView__TickBump_24001e8(float param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  
  lVar4 = *(long *)(param_2 + 0x38);
  param_1 = *(float *)(param_2 + 0x214) + param_1;
  *(float *)(param_2 + 0x214) = param_1;
  if (*(char *)(param_2 + 0x21c) == '\0') {
    if (lVar4 != 0) {
      param_1 = param_1 / *(float *)(param_2 + 0x218);
      fVar7 = 1.0;
      if (param_1 <= 1.0) {
        fVar7 = param_1;
      }
      fVar8 = 0.0;
      if (0.0 <= param_1) {
        fVar8 = fVar7;
      }
      fVar7 = *(float *)(param_2 + 0x210) * fVar8 * fVar8;
      UnityEngine_Transform__set_position_43d0f1c
                ((float)*(undefined8 *)(param_2 + 0x1e8) +
                 (float)*(undefined8 *)(param_2 + 0x204) * fVar7,
                 (float)((ulong)*(undefined8 *)(param_2 + 0x1e8) >> 0x20) +
                 (float)((ulong)*(undefined8 *)(param_2 + 0x204) >> 0x20) * fVar7,
                 *(float *)(param_2 + 0x1f0) + *(float *)(param_2 + 0x20c) * fVar7,lVar4,0);
      fVar7 = _UNK_00e20018;
      if (1.0 <= fVar8) {
        lVar4 = *(long *)(param_2 + 0x220);
        *(undefined4 *)(param_2 + 0x214) = 0;
        *(undefined1 *)(param_2 + 0x21c) = 1;
        *(float *)(param_2 + 0x188) = *(float *)(param_2 + 0x188) + fVar7;
        *(float *)(param_2 + 0x198) = *(float *)(param_2 + 0x198) + 220.0;
        if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x02500388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
          return;
        }
      }
      return;
    }
LAB_02500398:
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (lVar4 == 0) goto LAB_02500398;
  fVar8 = *(float *)(param_2 + 0x218) * _UNK_00e20838;
  fVar7 = _UNK_00e205f8;
  if (_UNK_00e205f8 <= fVar8) {
    fVar7 = fVar8;
  }
  param_1 = param_1 / fVar7;
  fVar7 = 1.0;
  if (param_1 <= 1.0) {
    fVar7 = param_1;
  }
  fVar8 = 0.0;
  if (0.0 <= param_1) {
    fVar8 = fVar7;
  }
  fVar7 = *(float *)(param_2 + 0x210) * ((1.0 - fVar8) * (1.0 - fVar8) + -1.0 + 1.0);
  UnityEngine_Transform__set_position_43d0f1c
            ((float)*(undefined8 *)(param_2 + 0x1e8) +
             (float)*(undefined8 *)(param_2 + 0x204) * fVar7,
             (float)((ulong)*(undefined8 *)(param_2 + 0x1e8) >> 0x20) +
             (float)((ulong)*(undefined8 *)(param_2 + 0x204) >> 0x20) * fVar7,
             *(float *)(param_2 + 0x1f0) + *(float *)(param_2 + 0x20c) * fVar7,lVar4,0);
  if (fVar8 < 1.0) {
    return;
  }
  if (*(long *)(param_2 + 0x38) == 0) goto LAB_02500398;
  UnityEngine_Transform__set_position_43d0f1c
            (*(undefined4 *)(param_2 + 0x1e8),*(undefined4 *)(param_2 + 0x1ec),
             *(undefined4 *)(param_2 + 0x1f0),*(long *)(param_2 + 0x38),0);
  if ((bRam0000000004f9caeb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9caeb = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  *(undefined4 *)(param_2 + 0x2c) = 0;
  if (*(char *)(param_2 + 0xe1) == '\0') {
    if (*(char *)(param_2 + 0xe0) == '\0') {
      lVar4 = *(long *)(param_2 + 0x48);
      if (*(char *)(param_2 + 0xb8) == '\0') {
        if ((lVar4 == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0), lVar4 == 0))
        goto LAB_024f6f60;
        UnityEngine_GameObject__SetActive_43c1408(lVar4,1,0);
        if ((*(long *)(param_2 + 0x50) == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_2 + 0x50),0),
           lVar4 == 0)) goto LAB_024f6f60;
        UnityEngine_GameObject__SetActive_43c1408(lVar4,0,0);
        if ((*(long *)(param_2 + 0x60) == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_2 + 0x60),0),
           lVar4 == 0)) goto LAB_024f6f60;
        UnityEngine_GameObject__SetActive_43c1408(lVar4,0,0);
      }
      else {
        if ((lVar4 == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0), lVar4 == 0))
        goto LAB_024f6f60;
        UnityEngine_GameObject__SetActive_43c1408(lVar4,1,0);
        uVar6 = *(undefined8 *)(param_2 + 200);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
        if ((uVar3 & 1) != 0) {
          uVar6 = *(undefined8 *)(param_2 + 200);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          UnityEngine_Object__Destroy_43c8114(uVar6,0);
          *(undefined8 *)(param_2 + 200) = 0;
          thunk_FUN_02134474(param_2 + 200,0);
          Dino_BusSand_View_VehicleView__ApplyAuthoredMaterials_23f9e48(param_2);
        }
      }
    }
  }
  else if (*(char *)(param_2 + 0x134) != '\0') {
    *(undefined1 *)(param_2 + 0x134) = 0;
    Dino_BusSand_View_VehicleView__ApplyPackColors_23f770c(param_2);
  }
  if (*(long *)(param_2 + 0x68) != 0) {
    lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_2 + 0x68),0);
    if (*(char *)(param_2 + 0x30) == '\0') {
      bVar2 = *(char *)(param_2 + 0x2dd) == '\0';
    }
    else {
      bVar2 = false;
    }
    if (lVar4 != 0) {
      UnityEngine_GameObject__SetActive_43c1408(lVar4,bVar2,0);
      uVar6 = *(undefined8 *)(param_2 + 0x80);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
      if ((uVar3 & 1) != 0) {
        if ((*(long *)(param_2 + 0x80) == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_2 + 0x80),0),
           lVar4 == 0)) goto LAB_024f6f60;
        UnityEngine_GameObject__SetActive_43c1408(lVar4,*(char *)(param_2 + 0x30) != '\0',0);
      }
      *(undefined4 *)(param_2 + 0xb0) = *(undefined4 *)(param_2 + 0xa8);
      lVar4 = *(long *)(param_2 + 0x40);
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
      if (lVar4 != 0) {
        fVar7 = *(float *)(param_2 + 0xb0);
        lVar5 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
        UnityEngine_Transform__set_localScale_43d1be0
                  (fVar7 * *(float *)(lVar5 + 0xc),fVar7 * *(float *)(lVar5 + 0x10),
                   *(float *)(lVar5 + 0x14) * fVar7,lVar4,0);
        if ((*(char *)(param_2 + 0xe1) != '\0') && (*(float *)(param_2 + 0x29c) < 0.0)) {
          uVar6 = *(undefined8 *)(param_2 + 0x78);
          if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
          if ((uVar3 & 1) != 0) {
            if (*(long *)(param_2 + 0x78) == 0) goto LAB_024f6f60;
            fVar7 = *(float *)(param_2 + 0xb0);
            UnityEngine_Transform__set_localScale_43d1be0
                      (fVar7 * *(float *)(param_2 + 0x38c),fVar7 * *(float *)(param_2 + 0x390),
                       *(float *)(param_2 + 0x394) * fVar7,*(long *)(param_2 + 0x78),0);
          }
        }
        uVar6 = *(undefined8 *)(param_2 + 0x88);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
        if ((uVar3 & 1) != 0) {
          if ((*(long *)(param_2 + 0x88) == 0) ||
             (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_2 + 0x88),0),
             lVar4 == 0)) goto LAB_024f6f60;
          UnityEngine_GameObject__SetActive_43c1408(lVar4,0,0);
        }
        lVar4 = UnityEngine_Component__get_gameObject_43bcde8(param_2,0);
        if (lVar4 != 0) {
          if ((bRam0000000004fa8360 & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf5bd0,1,0);
            bRam0000000004fa8360 = 1;
          }
          if (lVar4 != 0) {
            lVar5 = *(long *)(lVar4 + 0x10);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
            }
            if (pcRam0000000004fa8430 == (code *)0x0) {
              pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
            }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8430)(lVar5,1);
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

