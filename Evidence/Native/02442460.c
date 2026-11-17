/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$EmptyHearts
void Dino_BusSand_Cheat_AutoQa__EmptyHearts (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.AutoQa$$EmptyHearts
   void Dino_BusSand_Cheat_AutoQa__EmptyHearts (const MethodInfo* method); */

void Dino_BusSand_Cheat_AutoQa__EmptyHearts_2342460(void)

{
  undefined *puVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  
  puVar1 = PTR_DAT_04cabaf8;
                    /* try { // try from 0244246c to 02542483 has its CatchHandler @ 02442550 */
  if ((bRam0000000004f9c69d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    bRam0000000004f9c69d = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 024424a0 to 025424a3 has its CatchHandler @ 0244254c */
                    /* try { // try from 024424a4 to 025424c7 has its CatchHandler @ 02442548 */
  if (cRam0000000004f9b894 == '\0') {
    FUN_02132f7c(PTR_DAT_04cabaf8);
    cRam0000000004f9b894 = '\x01';
  }
  lVar3 = *(long *)puVar1;
                    /* try { // try from 024424c8 to 0254250f has its CatchHandler @ 024420d0 */
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar1;
  }
  cVar2 = cRam0000000004f9b894;
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
  if (lVar5 != 0) {
    *(undefined4 *)(lVar5 + 0x28) = 0;
    if (cVar2 == '\0') {
      FUN_02132f7c(puVar1);
      lVar3 = *(long *)puVar1;
      cRam0000000004f9b894 = '\x01';
    }
    if (*(int *)(lVar3 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar3 = *(long *)puVar1;
    }
                    /* try { // try from 02442510 to 02542513 has its CatchHandler @ 02442568 */
                    /* try { // try from 02442518 to 0254251b has its CatchHandler @ 02442564 */
    lVar3 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x10);
                    /* try { // try from 0244251c to 0254252f has its CatchHandler @ 024420d0 */
    uVar4 = Dino_BusSand_App_Meta_Profile__Now_2271090(0);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x30) = uVar4;
      puVar1 = PTR_DAT_04cabaf8;
                    /* try { // try from 02442530 to 0254253f has its CatchHandler @ 02442544 */
      if ((bRam0000000004f9c0ee & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cabaf8);
        bRam0000000004f9c0ee = 1;
      }
      lVar3 = *(long *)puVar1;
      if (*(int *)(lVar3 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar3 = *(long *)puVar1;
      }
      *(undefined1 *)(*(long *)(lVar3 + 0xb8) + 0x28) = 1;
      fVar6 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
      *(float *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x2c) = fVar6 + 0.5;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

