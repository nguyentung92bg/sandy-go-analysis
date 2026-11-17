/* IL2CPP: Dino.BusSand.App.Ads.<WaitForRewarded>d__36$$MoveNext
bool Dino_BusSand_App_Ads__WaitForRewarded_d__36__MoveNext (Dino_BusSand_App_Ads__WaitForRewarded_d__36_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Ads.<WaitForRewarded>d__36$$MoveNext
   bool Dino_BusSand_App_Ads__WaitForRewarded_d__36__MoveNext
   (Dino_BusSand_App_Ads__WaitForRewarded_d__36_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_Ads__WaitForRewarded_d__36__MoveNext_21795d8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int *piVar8;
  undefined8 uVar9;
  long *plVar10;
  float fVar11;
  float fVar12;
  
                    /* try { // try from 022795dc to 023795e7 has its CatchHandler @ 02279608 */
                    /* try { // try from 022795e8 to 02379623 has its CatchHandler @ 022795ac */
  if ((bRam0000000004f9b8f4 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaa8);
                    /* catch() { ... } // from try @ 022795dc with catch @ 02279608 */
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cad098);
                    /* try { // try from 02279624 to 02379697 has its CatchHandler @ 02279624
                       catch() { ... } // from try @ 02279624 with catch @ 02279624
                       catch() { ... } // from try @ 022796ac with catch @ 02279624 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad198);
    FUN_02132f7c(PTR_DAT_04cad168);
    FUN_02132f7c(PTR_DAT_04cad1a0);
    FUN_02132f7c(PTR_DAT_04cad1a8);
    bRam0000000004f9b8f4 = 1;
  }
  cVar3 = cRam0000000004f9b94d;
  puVar1 = PTR_DAT_04ca9ae8;
  if (*(int *)(param_1 + 0x10) == 1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (cVar3 == '\0') {
      FUN_02132f7c(PTR_DAT_04cad1b0);
                    /* try { // try from 02279698 to 023796ab has its CatchHandler @ 022796c0 */
      cRam0000000004f9b94d = '\x01';
    }
    puVar2 = PTR_DAT_04cad1b0;
                    /* try { // try from 022796ac to 023796d7 has its CatchHandler @ 02279624 */
    uVar9 = **(undefined8 **)(*(long *)PTR_DAT_04cad1b0 + 0xb8);
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* catch() { ... } // from try @ 02279698 with catch @ 022796c0 */
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
    lVar7 = 0;
    if ((uVar5 & 1) != 0) {
      if (cRam0000000004f9b94d == '\0') {
        FUN_02132f7c(PTR_DAT_04cad1b0);
        cRam0000000004f9b94d = '\x01';
      }
      if (**(long **)(*(long *)puVar2 + 0xb8) == 0) goto LAB_02279950;
      uVar9 = Dino_BusSand_App_UI_UIManager__Get_object__29451c8
                        (**(long **)(*(long *)puVar2 + 0xb8),*(undefined8 *)PTR_DAT_04cad198);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)puVar1);
      }
      uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar9,0,0);
      lVar7 = 0;
      if ((uVar5 & 1) != 0) {
        lVar7 = Dino_BusSand_App_UI_StoreWaitingPanel__Open_22bb848(0);
      }
    }
    plVar10 = (long *)(param_1 + 0x30);
    *plVar10 = lVar7;
    thunk_FUN_02134474(plVar10);
    lVar7 = *plVar10;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar7,0,0);
    if ((uVar5 & 1) != 0) {
      if (*plVar10 == 0) goto LAB_02279950;
      puVar6 = (undefined8 *)(*plVar10 + 0x38);
      *puVar6 = 0;
      thunk_FUN_02134474(puVar6,0);
    }
    fVar11 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    fVar12 = (float)Dino_BusSand_App_Meta_Monetization__get_RewardedLoadWaitSec_2266b90(0);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)PTR_DAT_04cad1a0;
    *(float *)(param_1 + 0x38) = fVar11 + fVar12;
    thunk_FUN_02134474();
  }
  puVar2 = PTR_DAT_04cabaa8;
  lVar7 = *(long *)PTR_DAT_04cabaa8;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  plVar10 = (long *)**(undefined8 **)(lVar7 + 0xb8);
  if (plVar10 == (long *)0x0) goto LAB_02279950;
  lVar7 = *plVar10;
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar5 != 0) {
    piVar8 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar8 + -2) == *(long *)PTR_DAT_04cad098) {
        puVar6 = (undefined8 *)(lVar7 + (long)*piVar8 * 0x10 + 0x138);
        goto LAB_02279860;
      }
      uVar5 = uVar5 - 1;
      piVar8 = piVar8 + 4;
    } while (uVar5 != 0);
  }
  puVar6 = (undefined8 *)FUN_0216b7a4(plVar10,*(long *)PTR_DAT_04cad098,0);
LAB_02279860:
  uVar5 = (*(code *)*puVar6)(plVar10,uVar9,puVar6[1]);
  puVar6 = (undefined8 *)PTR_DAT_04cad168;
  if ((uVar5 & 1) == 0) {
    if (*(int *)(*(long *)PTR_DAT_04caa210 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar4 = UnityEngine_Application__get_internetReachability_4352df4(0);
    puVar6 = (undefined8 *)PTR_DAT_04cad1a8;
    if (iVar4 == 0) goto LAB_022798dc;
    fVar11 = (float)UnityEngine_Time__get_realtimeSinceStartup_43ca5c8(0);
    if (fVar11 < *(float *)(param_1 + 0x38)) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
  }
  else {
LAB_022798dc:
                    /* catch() { ... } // from try @ 02279920 with catch @ 022798dc */
    *(undefined8 *)(param_1 + 0x40) = *puVar6;
    thunk_FUN_02134474();
  }
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(uVar9,0,0);
  if ((uVar5 & 1) != 0) {
                    /* try { // try from 02279914 to 0237991f has its CatchHandler @ 022799c4 */
    Dino_BusSand_App_UI_StoreWaitingPanel__Hide_22bb980(0);
  }
  lVar7 = *(long *)(param_1 + 0x28);
                    /* try { // try from 02279920 to 023799e3 has its CatchHandler @ 022798dc */
  if (lVar7 != 0) {
    (**(code **)(lVar7 + 0x18))
              (*(undefined8 *)(lVar7 + 0x40),*(undefined8 *)(param_1 + 0x40),
               *(undefined8 *)(lVar7 + 0x28));
    return 0;
  }
LAB_02279950:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

