/* IL2CPP: Dino.BusSand.View.GameView$$SetRing
void Dino_BusSand_View_GameView__SetRing (Dino_BusSand_View_GameView_o* __this, UnityEngine_Vector3_array* v, int32_t at, UnityEngine_Vector2_o lo, UnityEngine_Vector2_o hi, float d, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.View.GameView$$SetRing
   void Dino_BusSand_View_GameView__SetRing (Dino_BusSand_View_GameView_o* __this,
   UnityEngine_Vector3_array* v, int32_t at, UnityEngine_Vector2_o lo, UnityEngine_Vector2_o hi,
   float d, const MethodInfo* method); */

void Dino_BusSand_View_GameView__SetRing_23a9d0c
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,long param_6,long param_7,uint param_8)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
                    /* try { // try from 024a9d28 to 025a9d37 has its CatchHandler @ 024aa9fc */
  if (*(long *)(param_6 + 0x38) != 0) {
    lVar1 = UnityEngine_Component__get_transform_43bcd18(*(long *)(param_6 + 0x38),0);
                    /* try { // try from 024a9d5c to 025a9d6b has its CatchHandler @ 024aab00 */
                    /* try { // try from 024a9d78 to 025a9d7f has its CatchHandler @ 024aaa54 */
    if (((*(long *)(param_6 + 0x38) != 0) &&
        (uVar5 = param_2, uVar4 = param_5,
        UnityEngine_Camera__ViewportToWorldPoint_435c57c(param_1,*(long *)(param_6 + 0x38),0),
        lVar1 != 0)) &&
       (uVar3 = UnityEngine_Transform__InverseTransformPoint_43d3ffc(lVar1,0), param_7 != 0)) {
                    /* try { // try from 024a9d90 to 025a9d93 has its CatchHandler @ 024aaa00 */
                    /* try { // try from 024a9d94 to 025a9da3 has its CatchHandler @ 024aaa50 */
      if (param_8 < *(uint *)(param_7 + 0x18)) {
        lVar2 = param_7 + (long)(int)param_8 * 0xc;
        *(undefined4 *)(lVar2 + 0x20) = uVar3;
        *(undefined4 *)(lVar2 + 0x24) = uVar5;
        *(undefined4 *)(lVar2 + 0x28) = uVar4;
        if (*(long *)(param_6 + 0x38) == 0) goto LAB_024a9ea0;
        uVar5 = param_5;
                    /* try { // try from 024a9dc0 to 025a9dcb has its CatchHandler @ 024aaa18 */
        UnityEngine_Camera__ViewportToWorldPoint_435c57c(param_3,*(long *)(param_6 + 0x38),0);
        uVar4 = UnityEngine_Transform__InverseTransformPoint_43d3ffc(lVar1,0);
        if (param_8 + 1 < *(uint *)(param_7 + 0x18)) {
                    /* try { // try from 024a9de4 to 025a9de7 has its CatchHandler @ 024aa9ec */
          lVar2 = param_7 + (long)(int)(param_8 + 1) * 0xc;
                    /* try { // try from 024a9de8 to 025a9df7 has its CatchHandler @ 024aaa1c */
          *(undefined4 *)(lVar2 + 0x20) = uVar4;
          *(undefined4 *)(lVar2 + 0x24) = param_2;
          *(undefined4 *)(lVar2 + 0x28) = uVar5;
          if (*(long *)(param_6 + 0x38) == 0) goto LAB_024a9ea0;
          uVar5 = param_4;
          uVar4 = param_5;
          UnityEngine_Camera__ViewportToWorldPoint_435c57c(param_3,*(long *)(param_6 + 0x38),0);
                    /* try { // try from 024a9e14 to 025a9e17 has its CatchHandler @ 024aa9e0 */
          uVar3 = UnityEngine_Transform__InverseTransformPoint_43d3ffc(lVar1,0);
                    /* try { // try from 024a9e18 to 025a9e37 has its CatchHandler @ 024aa9f4 */
          if (param_8 + 2 < *(uint *)(param_7 + 0x18)) {
            lVar2 = param_7 + (long)(int)(param_8 + 2) * 0xc;
            *(undefined4 *)(lVar2 + 0x20) = uVar3;
            *(undefined4 *)(lVar2 + 0x24) = uVar5;
            *(undefined4 *)(lVar2 + 0x28) = uVar4;
            if (*(long *)(param_6 + 0x38) == 0) goto LAB_024a9ea0;
                    /* try { // try from 024a9e4c to 025a9e53 has its CatchHandler @ 024aaab4 */
            UnityEngine_Camera__ViewportToWorldPoint_435c57c(param_1,*(long *)(param_6 + 0x38),0);
            uVar5 = UnityEngine_Transform__InverseTransformPoint_43d3ffc(lVar1,0);
            if (param_8 + 3 < *(uint *)(param_7 + 0x18)) {
                    /* try { // try from 024a9e78 to 025a9e7b has its CatchHandler @ 024aaa2c */
                    /* try { // try from 024a9e7c to 025a9ebf has its CatchHandler @ 024aab90 */
              param_7 = param_7 + (long)(int)(param_8 + 3) * 0xc;
              *(undefined4 *)(param_7 + 0x20) = uVar5;
              *(undefined4 *)(param_7 + 0x24) = param_4;
              *(undefined4 *)(param_7 + 0x28) = param_5;
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
  }
LAB_024a9ea0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

