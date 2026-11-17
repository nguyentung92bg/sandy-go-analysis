/* IL2CPP: Dino.BusSand.App.UI.WinPanel.<>c__DisplayClass24_0$$<ChestFull>b__0
void Dino_BusSand_App_UI_WinPanel___c__DisplayClass24_0___ChestFull_b__0 (Dino_BusSand_App_UI_WinPanel___c__DisplayClass24_0_o* __this, float k, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.WinPanel.<>c__DisplayClass24_0$$<ChestFull>b__0
   void Dino_BusSand_App_UI_WinPanel___c__DisplayClass24_0___ChestFull_b__0
   (Dino_BusSand_App_UI_WinPanel___c__DisplayClass24_0_o* __this, float k, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_WinPanel___c__DisplayClass24_0___ChestFull_b__0_2314d6c
               (float param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c567 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c567 = 1;
  }
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 02414db8 to 02514e03 has its CatchHandler @ 02414db8
                       catch() { ... } // from try @ 02414db8 with catch @ 02414db8
                       catch() { ... } // from try @ 02414f84 with catch @ 02414db8
                       catch() { ... } // from try @ 02414fdc with catch @ 02414db8
                       catch() { ... } // from try @ 02415050 with catch @ 02414db8 */
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  func_0x049b5320(param_1 * _UNK_00e2082c * 6.0);
  UnityEngine_Quaternion__Internal_FromEulerRad_43af004(_UNK_00e20a74 * 0.0,0,0);
                    /* try { // try from 02414e04 to 02514e6b has its CatchHandler @ 02414fa8 */
  if ((bRam0000000004fa8b3a & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7a00);
    bRam0000000004fa8b3a = 1;
  }
  if (lVar3 != 0) {
    lVar3 = *(long *)(lVar3 + 0x10);
    if (lVar3 != 0) {
      if (pcRam0000000004fa8bd0 == (code *)0x0) {
        pcRam0000000004fa8bd0 = (code *)FUN_02132f40(&UNK_00e520b7);
      }
      (*pcRam0000000004fa8bd0)(lVar3,&stack0xffffffffffffffd0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

