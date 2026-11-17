/* IL2CPP: Dino.BusSand.Cheat.CheatHint$$Hide
void Dino_BusSand_Cheat_CheatHint__Hide (Dino_BusSand_Cheat_CheatHint_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.CheatHint$$Hide
   void Dino_BusSand_Cheat_CheatHint__Hide (Dino_BusSand_Cheat_CheatHint_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_Cheat_CheatHint__Hide_235c314(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c72c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c72c = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 0245c368 to 0255c38f has its CatchHandler @ 0245c4c0 */
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) != 0) {
    if ((*(long *)(param_1 + 0x28) == 0) ||
       (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0x28),0),
       lVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    UnityEngine_GameObject__SetActive_43c1408(lVar3,0,0);
  }
                    /* try { // try from 0245c394 to 0255c39b has its CatchHandler @ 0245c4b4 */
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
                    /* try { // try from 0245c39c to 0255c3ff has its CatchHandler @ 0245c4bc */
  return;
}

