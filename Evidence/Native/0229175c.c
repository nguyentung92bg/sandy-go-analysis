/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel.<Sfx>d__21$$MoveNext
bool Dino_BusSand_App_UI_BattleRoyaleResultPanel__Sfx_d__21__MoveNext (Dino_BusSand_App_UI_BattleRoyaleResultPanel__Sfx_d__21_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.BattleRoyaleResultPanel.<Sfx>d__21$$MoveNext
   bool Dino_BusSand_App_UI_BattleRoyaleResultPanel__Sfx_d__21__MoveNext
   (Dino_BusSand_App_UI_BattleRoyaleResultPanel__Sfx_d__21_o* __this, const MethodInfo* method); */

bool Dino_BusSand_App_UI_BattleRoyaleResultPanel__Sfx_d__21__MoveNext_219175c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
                    /* try { // try from 02291768 to 02391777 has its CatchHandler @ 02291768
                       catch() { ... } // from try @ 02291768 with catch @ 02291768
                       catch() { ... } // from try @ 02291780 with catch @ 02291768 */
  if ((bRam0000000004f9b9aa & 1) == 0) {
                    /* try { // try from 02291778 to 0239177f has its CatchHandler @ 0229179c */
                    /* try { // try from 02291780 to 023917b7 has its CatchHandler @ 02291768 */
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04caca88);
    bRam0000000004f9b9aa = 1;
  }
  puVar3 = PTR_DAT_04caca88;
  puVar2 = PTR_DAT_04cab1e8;
  iVar1 = *(int *)(param_1 + 0x10);
                    /* catch() { ... } // from try @ 02291778 with catch @ 0229179c */
  if (iVar1 == 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x20);
                    /* catch() { ... } // from try @ 022917cc with catch @ 022917f0 */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    uVar4 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    UnityEngine_WaitForSecondsRealtime___ctor_43ca5f0(uVar5,uVar4,0);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar4);
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  else if (iVar1 == 1) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
                    /* try { // try from 022917b8 to 023917cb has its CatchHandler @ 022917b8
                       catch() { ... } // from try @ 022917b8 with catch @ 022917b8
                       catch() { ... } // from try @ 022917d4 with catch @ 022917b8 */
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
                    /* try { // try from 022917cc to 023917d3 has its CatchHandler @ 022917f0 */
                    /* try { // try from 022917d4 to 0239180b has its CatchHandler @ 022917b8 */
    Dino_BusSand_App_Audio__Play_214da60(0x3f800000,uVar4,0);
  }
                    /* try { // try from 02291824 to 023918a7 has its CatchHandler @ 02291824
                       catch() { ... } // from try @ 02291824 with catch @ 02291824
                       catch() { ... } // from try @ 022918b8 with catch @ 02291824 */
  return iVar1 == 0;
}

