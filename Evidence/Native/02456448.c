/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<WaitFor>d__58$$MoveNext
bool Dino_BusSand_Cheat_AutoQa__WaitFor_d__58__MoveNext (Dino_BusSand_Cheat_AutoQa__WaitFor_d__58_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa.<WaitFor>d__58$$MoveNext
   bool Dino_BusSand_Cheat_AutoQa__WaitFor_d__58__MoveNext
   (Dino_BusSand_Cheat_AutoQa__WaitFor_d__58_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_Cheat_AutoQa__WaitFor_d__58__MoveNext_2356448(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  lVar4 = *(long *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x10) == 1) {
    fVar6 = *(float *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    fVar5 = (float)UnityEngine_Time__get_unscaledDeltaTime_43cd638(0);
    fVar6 = fVar6 + fVar5;
    *(float *)(param_1 + 0x34) = fVar6;
  }
  else {
                    /* try { // try from 02456468 to 025564fb has its CatchHandler @ 02456468
                       catch() { ... } // from try @ 02456468 with catch @ 02456468
                       catch() { ... } // from try @ 02456504 with catch @ 02456468
                       catch() { ... } // from try @ 02456544 with catch @ 02456468
                       catch() { ... } // from try @ 0245656c with catch @ 02456468
                       catch() { ... } // from try @ 02456590 with catch @ 02456468 */
    if (*(int *)(param_1 + 0x10) != 0) {
      return 0;
    }
    fVar6 = 0.0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  lVar3 = *(long *)(param_1 + 0x20);
  if (*(float *)(param_1 + 0x30) <= fVar6) {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar1 = (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28))
    ;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar1 = bVar1 & 1;
  }
  else {
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar2 = (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28))
    ;
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
                    /* try { // try from 02456568 to 0255656b has its CatchHandler @ 02456584 */
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    bVar1 = 1;
  }
  *(byte *)(lVar4 + 0x28) = bVar1;
                    /* try { // try from 0245656c to 02556587 has its CatchHandler @ 02456468 */
  return 0;
                    /* try { // try from 024564fc to 02556503 has its CatchHandler @ 0245654c */
}

