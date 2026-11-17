/* IL2CPP: Dino.BusSand.View.GameView.<>c__DisplayClass170_0$$<OnEscaped>b__0
void Dino_BusSand_View_GameView___c__DisplayClass170_0___OnEscaped_b__0 (Dino_BusSand_View_GameView___c__DisplayClass170_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x024f6bdc) */
/* WARNING: Removing unreachable block (ram,0x024f6dbc) */
/* WARNING: Removing unreachable block (ram,0x024f6dcc) */
/* WARNING: Removing unreachable block (ram,0x024f6e00) */
/* WARNING: Removing unreachable block (ram,0x024f6e14) */
/* WARNING: Removing unreachable block (ram,0x024f6e18) */
/* WARNING: Removing unreachable block (ram,0x024f6e2c) */
/* WARNING: Removing unreachable block (ram,0x024f6e34) */
/* WARNING: Removing unreachable block (ram,0x024f6e54) */
/* WARNING: Removing unreachable block (ram,0x024f6e58) */
/* WARNING: Removing unreachable block (ram,0x024f6f20) */
/* WARNING: Removing unreachable block (ram,0x024f6f24) */
/* WARNING: Removing unreachable block (ram,0x024f6f34) */
/* WARNING: Removing unreachable block (ram,0x024f6f38) */
/* WARNING: Removing unreachable block (ram,0x024f6f50) */
/* WARNING: Removing unreachable block (ram,0x024f6c6c) */
/* IL2CPP: Dino.BusSand.View.GameView.<>c__DisplayClass170_0$$<OnEscaped>b__0
   void Dino_BusSand_View_GameView___c__DisplayClass170_0___OnEscaped_b__0
   (Dino_BusSand_View_GameView___c__DisplayClass170_0_o* __this, const MethodInfo* method); */

void Dino_BusSand_View_GameView___c__DisplayClass170_0___OnEscaped_b__0_23abd94(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  float fVar7;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c95e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c95e = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  if ((uVar2 & 1) == 0) {
                    /* try { // try from 024abe10 to 025abe17 has its CatchHandler @ 024abf38 */
    return;
  }
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004f9caeb & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6dd0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9caeb = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  *(undefined4 *)(lVar3 + 0x2c) = 5;
  if (*(char *)(lVar3 + 0xe1) == '\0') {
    if (*(char *)(lVar3 + 0xe0) == '\0') {
      lVar4 = *(long *)(lVar3 + 0x48);
      if (*(char *)(lVar3 + 0xb8) == '\0') {
        if ((lVar4 == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0), lVar4 == 0))
        goto LAB_024f6f60;
        UnityEngine_GameObject__SetActive_43c1408(lVar4,1,0);
        if ((*(long *)(lVar3 + 0x50) == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar3 + 0x50),0),
           lVar4 == 0)) goto LAB_024f6f60;
        UnityEngine_GameObject__SetActive_43c1408(lVar4,0,0);
        if ((*(long *)(lVar3 + 0x60) == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar3 + 0x60),0),
           lVar4 == 0)) goto LAB_024f6f60;
        UnityEngine_GameObject__SetActive_43c1408(lVar4,0,0);
      }
      else {
        if ((lVar4 == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(lVar4,0), lVar4 == 0))
        goto LAB_024f6f60;
        UnityEngine_GameObject__SetActive_43c1408(lVar4,1,0);
        uVar6 = *(undefined8 *)(lVar3 + 200);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
      }
    }
  }
  else if (*(char *)(lVar3 + 0x134) != '\0') {
    *(undefined1 *)(lVar3 + 0x134) = 0;
    Dino_BusSand_View_VehicleView__ApplyPackColors_23f770c(lVar3);
  }
  if ((*(long *)(lVar3 + 0x68) != 0) &&
     (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar3 + 0x68),0), lVar4 != 0))
  {
    UnityEngine_GameObject__SetActive_43c1408(lVar4,0,0);
    uVar6 = *(undefined8 *)(lVar3 + 0x80);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    if ((uVar2 & 1) != 0) {
      if ((*(long *)(lVar3 + 0x80) == 0) ||
         (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar3 + 0x80),0),
         lVar4 == 0)) goto LAB_024f6f60;
      UnityEngine_GameObject__SetActive_43c1408(lVar4,0,0);
    }
    *(undefined4 *)(lVar3 + 0xb0) = *(undefined4 *)(lVar3 + 0xa8);
    lVar4 = *(long *)(lVar3 + 0x40);
    if (cRam0000000004f9b65e == '\0') {
      FUN_02132f7c(PTR_DAT_04caa208);
      cRam0000000004f9b65e = '\x01';
    }
    if (lVar4 != 0) {
      fVar7 = *(float *)(lVar3 + 0xb0);
      lVar5 = *(long *)(*(long *)PTR_DAT_04caa208 + 0xb8);
      UnityEngine_Transform__set_localScale_43d1be0
                (fVar7 * *(float *)(lVar5 + 0xc),fVar7 * *(float *)(lVar5 + 0x10),
                 *(float *)(lVar5 + 0x14) * fVar7,lVar4,0);
      if ((*(char *)(lVar3 + 0xe1) != '\0') && (*(float *)(lVar3 + 0x29c) < 0.0)) {
        uVar6 = *(undefined8 *)(lVar3 + 0x78);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
        if ((uVar2 & 1) != 0) {
          if (*(long *)(lVar3 + 0x78) == 0) goto LAB_024f6f60;
          fVar7 = *(float *)(lVar3 + 0xb0);
          UnityEngine_Transform__set_localScale_43d1be0
                    (fVar7 * *(float *)(lVar3 + 0x38c),fVar7 * *(float *)(lVar3 + 0x390),
                     *(float *)(lVar3 + 0x394) * fVar7,*(long *)(lVar3 + 0x78),0);
        }
      }
      uVar6 = *(undefined8 *)(lVar3 + 0x88);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
      if ((uVar2 & 1) != 0) {
        if ((*(long *)(lVar3 + 0x88) == 0) ||
           (lVar4 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(lVar3 + 0x88),0),
           lVar4 == 0)) goto LAB_024f6f60;
        UnityEngine_GameObject__SetActive_43c1408(lVar4,0,0);
      }
      lVar3 = UnityEngine_Component__get_gameObject_43bcde8(lVar3,0);
      if (lVar3 != 0) {
        if ((bRam0000000004fa8360 & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
          bRam0000000004fa8360 = 1;
        }
        if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar4 = *(long *)(lVar3 + 0x10);
        if (lVar4 != 0) {
          if (pcRam0000000004fa8430 == (code *)0x0) {
            pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
          }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa8430)(lVar4,0);
          return;
        }
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
      }
    }
  }
LAB_024f6f60:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

