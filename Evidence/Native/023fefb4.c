/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel.<CountCoins>d__31$$MoveNext
bool Dino_BusSand_App_UI_MainHudPanel__CountCoins_d__31__MoveNext (Dino_BusSand_App_UI_MainHudPanel__CountCoins_d__31_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.MainHudPanel.<CountCoins>d__31$$MoveNext
   bool Dino_BusSand_App_UI_MainHudPanel__CountCoins_d__31__MoveNext
   (Dino_BusSand_App_UI_MainHudPanel__CountCoins_d__31_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_MainHudPanel__CountCoins_d__31__MoveNext_22fefb4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dStack_38;
  
  if ((bRam0000000004f9c4c7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c4c7 = 1;
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar6 = *(float *)(param_1 + 0x40);
  }
  else {
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    fVar6 = 0.0;
    *(undefined4 *)(param_1 + 0x40) = 0;
  }
                    /* try { // try from 023ff018 to 024ff01f has its CatchHandler @ 023ff070 */
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
                    /* try { // try from 023ff020 to 024ff063 has its CatchHandler @ 023fef84 */
  if (*(float *)(param_1 + 0x20) <= fVar6) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 023ff0ac with catch @ 023ff0bc
                        */
    if (lVar3 != 0) {
      Dino_BusSand_App_UI_MainHudPanel__SetCoins_22fbad4(lVar3,*(undefined8 *)(param_1 + 0x38));
      *(undefined8 *)(lVar3 + 0x60) = 0;
      thunk_FUN_02134474((undefined8 *)(lVar3 + 0x60),0);
      return 0;
    }
    goto LAB_023ff178;
  }
  fVar4 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  fVar5 = (fVar6 + fVar4) / *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x40) = fVar6 + fVar4;
  fVar6 = 1.0;
  if (fVar5 <= 1.0) {
    fVar6 = fVar5;
  }
  fVar4 = 1.0;
  if (0.0 <= fVar5) {
    fVar4 = 1.0 - fVar6;
  }
  fVar6 = (float)func_0x049b5300(fVar4,0x40800000);
                    /* try { // try from 023ff064 to 024ff067 has its CatchHandler @ 023ff06c */
                    /* try { // try from 023ff068 to 024ff08b has its CatchHandler @ 023fef84 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023ff064 with catch @ 023ff06c
                        */
  lVar1 = *(long *)(param_1 + 0x30);
  lVar2 = *(long *)(param_1 + 0x38);
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 023ff018 with catch @ 023ff070
                        */
  if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 023ff08c to 024ff08f has its CatchHandler @ 023ff0a8 */
                    /* try { // try from 023ff090 to 024ff0ab has its CatchHandler @ 023fef84 */
  dVar8 = (double)(lVar2 - lVar1) * (double)(1.0 - fVar6);
  dVar7 = (double)FUN_049b52f0(dVar8,&dStack_38);
  if (0.0 <= dVar8) {
    if (dVar7 == 0.5) {
      dVar7 = 1.0;
      goto LAB_023ff0f8;
    }
    dStack_38 = (double)(long)(dVar8 + 0.5);
  }
  else {
                    /* catch() { ... } // from try @ 023ff08c with catch @ 023ff0a8 */
                    /* try { // try from 023ff0ac to 024ff0b3 has its CatchHandler @ 023ff0bc */
    if (dVar7 == -0.5) {
                    /* try { // try from 023ff0b4 to 024ff0bf has its CatchHandler @ 023fef84 */
      dVar7 = -1.0;
LAB_023ff0f8:
      if (((long)dStack_38 & 1U) != 0) {
        dStack_38 = dStack_38 + dVar7;
      }
    }
    else {
      dStack_38 = (double)(long)(dVar8 + -0.5);
    }
  }
  if (lVar3 != 0) {
    lVar2 = -0x8000000000000000;
    if (dStack_38 != INFINITY) {
      lVar2 = (long)dStack_38;
    }
    Dino_BusSand_App_UI_MainHudPanel__SetCoins_22fbad4(lVar3,lVar2 + lVar1);
    *(undefined8 *)(param_1 + 0x18) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
    *(undefined4 *)(param_1 + 0x10) = 1;
    return 1;
  }
LAB_023ff178:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

