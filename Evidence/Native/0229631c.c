/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$JumpTarget
UnityEngine_Vector3_o Dino_BusSand_App_UI_BattleRoyaleScenePanel__JumpTarget (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, UnityEngine_Transform_o* head, bool final, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleScenePanel$$JumpTarget
   UnityEngine_Vector3_o Dino_BusSand_App_UI_BattleRoyaleScenePanel__JumpTarget
   (Dino_BusSand_App_UI_BattleRoyaleScenePanel_o* __this, UnityEngine_Transform_o* head, bool final,
   const MethodInfo* method); */

float Dino_BusSand_App_UI_BattleRoyaleScenePanel__JumpTarget_219631c
                (undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4,long param_5,
                uint param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  
                    /* try { // try from 02296330 to 02396343 has its CatchHandler @ 0229637c */
                    /* try { // try from 02296344 to 0239638f has its CatchHandler @ 022961c0 */
  if ((*(long *)(param_4 + 0x40) != 0) &&
     (iVar1 = Dino_BusSand_App_Meta_BattleRoyaleCore__get_CurrentStage_2221150
                        (*(long *)(param_4 + 0x40),0), param_5 != 0)) {
    lVar2 = UnityEngine_Transform__get_parent_43d0d70(param_5,0);
    if (lVar2 != 0) {
                    /* catch() { ... } // from try @ 02296280 with catch @ 02296360 */
      uVar4 = UnityEngine_Transform__get_localPosition_43cfce8(lVar2,0);
                    /* catch() { ... } // from try @ 02296258 with catch @ 02296378 */
                    /* catch() { ... } // from try @ 02296210 with catch @ 0229637c
                       catch() { ... } // from try @ 02296330 with catch @ 0229637c */
      lVar3 = UnityEngine_Transform__get_parent_43d0d70(lVar2,0);
      if (lVar3 != 0) {
        fVar6 = _UNK_00e205f4;
        if ((param_6 & 1) == 0) {
          fVar6 = _UNK_00e2083c;
        }
        fVar5 = fVar6 + -30.0;
        if (iVar1 != 0) {
          fVar5 = fVar6;
        }
        UnityEngine_Transform__TransformPoint_43d3c44(uVar4,fVar5 + param_2,param_3,lVar3,0);
        fVar6 = (float)UnityEngine_Transform__get_position_43d0e48(lVar2,0);
        return -fVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

