/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$<PlaceWorldTags>g__Px|44_0
float Dino_BusSand_App_UI_HudPanel___PlaceWorldTags_g__Px_44_0 (UnityEngine_Vector3_o a, UnityEngine_Vector3_o b, Dino_BusSand_App_UI_HudPanel___c__DisplayClass44_0_o* , const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$<PlaceWorldTags>g__Px|44_0
   float Dino_BusSand_App_UI_HudPanel___PlaceWorldTags_g__Px_44_0 (UnityEngine_Vector3_o a,
   UnityEngine_Vector3_o b, Dino_BusSand_App_UI_HudPanel___c__DisplayClass44_0_o* , const
   MethodInfo* method); */

float Dino_BusSand_App_UI_HudPanel___PlaceWorldTags_g__Px_44_0_230af4c
                (float param_1,float param_2,float param_3,float param_4,float param_5,float param_6
                ,undefined4 *param_7)

{
  long lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  lVar1 = *(long *)(param_7 + 4);
  if (lVar1 != 0) {
    fVar7 = (float)param_7[2];
    fVar4 = (float)param_7[1];
    fVar2 = (float)UnityEngine_Quaternion__op_Multiply_43af48c
                             (*param_7,fVar4,fVar7,param_7[3],param_1 - *(float *)(lVar1 + 0x14),
                              param_2 - *(float *)(lVar1 + 0x18),param_3 - *(float *)(lVar1 + 0x1c),
                              0);
    lVar1 = *(long *)(param_7 + 4);
    if (lVar1 != 0) {
                    /* try { // try from 0240afbc to 0250afc3 has its CatchHandler @ 0240b074 */
                    /* try { // try from 0240afc4 to 0250b08f has its CatchHandler @ 0240aea0 */
      fVar8 = (float)param_7[2];
      fVar5 = (float)param_7[1];
      fVar3 = (float)UnityEngine_Quaternion__op_Multiply_43af48c
                               (*param_7,fVar5,fVar8,param_7[3],param_4 - *(float *)(lVar1 + 0x14),
                                param_5 - *(float *)(lVar1 + 0x18),
                                param_6 - *(float *)(lVar1 + 0x1c),0);
      if (cRam0000000004f9c550 == '\0') {
        FUN_02132f7c(PTR_DAT_04caa200);
        cRam0000000004f9c550 = '\x01';
      }
      if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar6 = _UNK_00e20948;
      if (_UNK_00e20948 <= fVar8) {
        fVar6 = fVar8;
      }
      fVar8 = _UNK_00e20948;
      if (_UNK_00e20948 <= fVar7) {
        fVar8 = fVar7;
      }
      fVar4 = fVar4 / fVar8 - fVar5 / fVar6;
      fVar2 = fVar2 / fVar8 - fVar3 / fVar6;
                    /* catch(type#1 @ 049bb748) { ... } // from try @ 0240afbc with catch @ 0240b074
                        */
      return SQRT(fVar2 * fVar2 + fVar4 * fVar4) * (float)param_7[6];
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

