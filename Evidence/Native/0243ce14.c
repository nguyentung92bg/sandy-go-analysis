/* IL2CPP: Dino.BusSand.App.UI.CloudDrift$$Update
void Dino_BusSand_App_UI_CloudDrift__Update (Dino_BusSand_App_UI_CloudDrift_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.CloudDrift$$Update
   void Dino_BusSand_App_UI_CloudDrift__Update (Dino_BusSand_App_UI_CloudDrift_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_CloudDrift__Update_233ce14
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_18;
  float fStack_14;
  
  if ((bRam0000000004f9c661 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabdb0);
    bRam0000000004f9c661 = 1;
  }
  plVar1 = (long *)UnityEngine_Component__get_transform_43bcd18(param_3,0);
  if (plVar1 == (long *)0x0) {
    if (*(char *)(param_3 + 0x34) == '\0') goto LAB_0243cf20;
  }
  else {
                    /* try { // try from 0243ce58 to 0253ce73 has its CatchHandler @ 0243cf14 */
    if (*plVar1 != *(long *)PTR_DAT_04cabdb0) {
                    /* WARNING: Subroutine does not return */
      FUN_021335a4(plVar1);
    }
    if (*(char *)(param_3 + 0x34) == '\0') {
      uVar3 = UnityEngine_RectTransform__get_anchoredPosition_43cf828(plVar1,0);
      *(undefined4 *)(param_3 + 0x2c) = uVar3;
      *(undefined4 *)(param_3 + 0x30) = param_2;
      *(undefined1 *)(param_3 + 0x34) = 1;
                    /* try { // try from 0243ce90 to 0253ceaf has its CatchHandler @ 0243cf0c */
    }
  }
  fVar5 = *(float *)(param_3 + 0x28);
  fVar4 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
  fVar5 = fVar5 + fVar4;
  *(float *)(param_3 + 0x28) = fVar5;
                    /* try { // try from 0243ceb0 to 0253ced7 has its CatchHandler @ 0243cf10 */
  if (plVar1 != (long *)0x0) {
    fVar6 = *(float *)(param_3 + 0x30);
    fVar4 = (float)func_0x049b5320(fVar5 * _UNK_00e1fea8);
    fVar6 = fVar4 * 5.0 + fVar6;
    fVar7 = *(float *)(param_3 + 0x2c);
                    /* try { // try from 0243cef4 to 0253cef7 has its CatchHandler @ 0243cf08 */
    fVar4 = (float)func_0x049b5320((fVar5 * _UNK_00e2082c + fVar5 * _UNK_00e2082c) /
                                   *(float *)(param_3 + 0x24));
                    /* try { // try from 0243cefc to 0253ceff has its CatchHandler @ 0243cf1c */
                    /* try { // try from 0243cf00 to 0253cf03 has its CatchHandler @ 0243cc74 */
                    /* try { // try from 0243cf04 to 0253cf07 has its CatchHandler @ 0243cf14 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243cef4 with catch @ 0243cf08
                       try { // try from 0243cf08 to 0253cf3b has its CatchHandler @ 0243cc74 */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243ce90 with catch @ 0243cf0c
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243ceb0 with catch @ 0243cf10
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243ce58 with catch @ 0243cf14
                       catch(type#1 @ 049bb748) { ... } // from try @ 0243cf04 with catch @ 0243cf14
                        */
    fStack_18 = fVar7 + *(float *)(param_3 + 0x20) * fVar4;
    fStack_14 = fVar6;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243cde0 with catch @ 0243cf18
                        */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243cefc with catch @ 0243cf1c
                        */
    if ((bRam0000000004fa8a88 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7bc8,0);
      bRam0000000004fa8a88 = 1;
    }
    if (plVar1 != (long *)0x0) {
      lVar2 = plVar1[2];
      if (lVar2 != 0) {
        if (pcRam0000000004fa8ad0 == (code *)0x0) {
          pcRam0000000004fa8ad0 = (code *)FUN_02132f40(&UNK_00e47400);
        }
        (*pcRam0000000004fa8ad0)(lVar2,&fStack_18);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_0243cf20:
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0243cda8 with catch @ 0243cf20
                        */
  FUN_02133224();
}

