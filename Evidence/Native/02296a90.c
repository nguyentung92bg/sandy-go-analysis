/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<FallRoutine>d__82$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__FallRoutine_d__82__MoveNext (Dino_BusSand_App_UI_BattleRoyaleScenePanel__FallRoutine_d__82_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel.<FallRoutine>d__82$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleScenePanel__FallRoutine_d__82__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel__FallRoutine_d__82_o* __this, const MethodInfo*
   method); */

undefined8
Dino_BusSand_App_UI_BattleRoyaleScenePanel__FallRoutine_d__82__MoveNext_2196a90
          (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
                    /* try { // try from 02296aa0 to 02396ac3 has its CatchHandler @ 02296a6c */
  if ((bRam0000000004f9b9d2 & 1) == 0) {
                    /* catch() { ... } // from try @ 02296a8c with catch @ 02296ab0 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04caca88);
                    /* try { // try from 02296ac4 to 02396ae7 has its CatchHandler @ 02296ac4
                       catch() { ... } // from try @ 02296ac4 with catch @ 02296ac4
                       catch() { ... } // from try @ 02296af0 with catch @ 02296ac4 */
    bRam0000000004f9b9d2 = 1;
  }
  puVar3 = PTR_DAT_04caca88;
  puVar2 = PTR_DAT_04ca9ae8;
  fVar9 = _UNK_00e2094c;
  iVar1 = *(int *)(param_4 + 0x10);
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      uVar7 = *(undefined4 *)(param_4 + 0x20);
                    /* catch() { ... } // from try @ 02296b54 with catch @ 02296b80 */
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar7,uVar6,0);
                    /* try { // try from 02296b9c to 02396bbf has its CatchHandler @ 02296b9c
                       catch() { ... } // from try @ 02296b9c with catch @ 02296b9c
                       catch() { ... } // from try @ 02296bc8 with catch @ 02296b9c */
      *(undefined8 *)(param_4 + 0x18) = uVar6;
      thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),uVar6);
      *(undefined4 *)(param_4 + 0x10) = 1;
      return 1;
    }
    if (iVar1 != 1) {
      return 0;
    }
                    /* try { // try from 02296ae8 to 02396aef has its CatchHandler @ 02296b14 */
                    /* try { // try from 02296af0 to 02396b2f has its CatchHandler @ 02296ac4 */
    uVar6 = *(undefined8 *)(param_4 + 0x28);
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* catch() { ... } // from try @ 02296ae8 with catch @ 02296b14 */
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_02296e08;
    uVar7 = UnityEngine_Transform__get_localPosition_43cfce8(*(long *)(param_4 + 0x28),0);
                    /* try { // try from 02296b30 to 02396b53 has its CatchHandler @ 02296b30
                       catch() { ... } // from try @ 02296b30 with catch @ 02296b30
                       catch() { ... } // from try @ 02296b5c with catch @ 02296b30 */
    *(undefined4 *)(param_4 + 0x30) = uVar7;
    *(undefined4 *)(param_4 + 0x34) = param_2;
    *(undefined4 *)(param_4 + 0x38) = param_3;
    *(undefined4 *)(param_4 + 0x40) = 0;
LAB_02296bd4:
    uVar6 = *(undefined8 *)(param_4 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02296bc0 with catch @ 02296bec */
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    if ((uVar4 & 1) != 0) {
                    /* try { // try from 02296c08 to 02396c2b has its CatchHandler @ 02296c08
                       catch() { ... } // from try @ 02296c08 with catch @ 02296c08
                       catch() { ... } // from try @ 02296c34 with catch @ 02296c08 */
      if (*(long *)(param_4 + 0x28) != 0) {
                    /* try { // try from 02296c2c to 02396c33 has its CatchHandler @ 02296c58 */
        fVar8 = (float)(int)*(uint *)(param_4 + 0x40) / -17.0 + 1.0;
                    /* try { // try from 02296c34 to 02396c73 has its CatchHandler @ 02296c08 */
        fVar9 = fVar8 * 5.0;
        if ((*(uint *)(param_4 + 0x40) & 1) != 0) {
          fVar9 = -(fVar8 * 5.0);
        }
        UnityEngine_Transform__set_localPosition_43cfda8
                  (*(float *)(param_4 + 0x30) + fVar9,*(float *)(param_4 + 0x34) + 0.0,
                   *(float *)(param_4 + 0x38) + 0.0,*(long *)(param_4 + 0x28),0);
                    /* catch() { ... } // from try @ 02296c2c with catch @ 02296c58 */
        uVar6 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caca88);
        UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(_UNK_00e20840,uVar6,0);
        *(undefined8 *)(param_4 + 0x18) = uVar6;
        thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),uVar6);
        uVar7 = 2;
        goto LAB_02296d98;
      }
      goto LAB_02296e08;
    }
LAB_02296c94:
    uVar6 = *(undefined8 *)(param_4 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
    if ((uVar4 & 1) != 0) {
      return 0;
    }
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_02296e08;
                    /* try { // try from 02296cd4 to 02396f03 has its CatchHandler @ 02296cd4
                       catch() { ... } // from try @ 02296cd4 with catch @ 02296cd4
                       catch() { ... } // from try @ 02296f48 with catch @ 02296cd4
                       catch() { ... } // from try @ 02297058 with catch @ 02296cd4 */
    UnityEngine_Transform__set_localPosition_43cfda8
              (*(undefined4 *)(param_4 + 0x30),*(undefined4 *)(param_4 + 0x34),
               *(undefined4 *)(param_4 + 0x38),*(long *)(param_4 + 0x28),0);
    if (*(long *)(param_4 + 0x28) == 0) goto LAB_02296e08;
    UnityEngine_Transform__get_position_43d0e48(*(long *)(param_4 + 0x28),0);
    *(undefined4 *)(param_4 + 0x3c) = 0;
LAB_02296cf0:
    uVar6 = *(undefined8 *)(param_4 + 0x28);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    if ((uVar4 & 1) != 0) {
      fVar8 = *(float *)(param_4 + 0x3c);
      fVar9 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
      fVar8 = fVar8 + fVar9;
      *(float *)(param_4 + 0x3c) = fVar8;
      if (*(long *)(param_4 + 0x28) != 0) {
        fVar8 = fVar8 / _UNK_00e2094c;
        fVar9 = 1.0;
        if (fVar8 <= 1.0) {
          fVar9 = fVar8;
        }
        fVar10 = 0.0;
        if (0.0 <= fVar8) {
          fVar10 = fVar9;
        }
        UnityEngine_Transform__set_localPosition_43cfda8
                  (*(undefined4 *)(param_4 + 0x30),
                   *(float *)(param_4 + 0x34) + fVar10 * fVar10 * -2000.0,
                   *(undefined4 *)(param_4 + 0x38),*(long *)(param_4 + 0x28),0);
        *(undefined8 *)(param_4 + 0x18) = 0;
        thunk_FUN_02134474((undefined8 *)(param_4 + 0x18),0);
        uVar7 = 3;
LAB_02296d98:
        *(undefined4 *)(param_4 + 0x10) = uVar7;
        return 1;
      }
      goto LAB_02296e08;
    }
  }
  else {
    if (iVar1 == 2) {
                    /* try { // try from 02296bc0 to 02396bc7 has its CatchHandler @ 02296bec */
      *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
      iVar1 = *(int *)(param_4 + 0x40) + 1;
                    /* try { // try from 02296bc8 to 02396c07 has its CatchHandler @ 02296b9c */
      *(int *)(param_4 + 0x40) = iVar1;
      if (iVar1 < 0x11) goto LAB_02296bd4;
      goto LAB_02296c94;
    }
    if (iVar1 != 3) {
      return 0;
    }
                    /* try { // try from 02296b54 to 02396b5b has its CatchHandler @ 02296b80 */
                    /* try { // try from 02296b5c to 02396b9b has its CatchHandler @ 02296b30 */
    *(undefined4 *)(param_4 + 0x10) = 0xffffffff;
    if (*(float *)(param_4 + 0x3c) < fVar9) goto LAB_02296cf0;
  }
  uVar6 = *(undefined8 *)(param_4 + 0x28);
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
  if ((uVar4 & 1) != 0) {
    if ((*(long *)(param_4 + 0x28) == 0) ||
       (lVar5 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_4 + 0x28),0),
       lVar5 == 0)) {
LAB_02296e08:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_GameObject__SetActive_43c1408(lVar5,0,0);
  }
  return 0;
}

