/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$OnDisable
void Dino_BusSand_App_UI_HudPanel__OnDisable (Dino_BusSand_App_UI_HudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$OnDisable
   void Dino_BusSand_App_UI_HudPanel__OnDisable (Dino_BusSand_App_UI_HudPanel_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_HudPanel__OnDisable_2309fa4(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c50d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c50d = 1;
  }
                    /* try { // try from 02409fdc to 02509fe3 has its CatchHandler @ 0240a3b8 */
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
                    /* try { // try from 02409fe4 to 02509ff3 has its CatchHandler @ 0240a3c0 */
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar2 = UnityEngine_Object__op_Inequality_43c8dec(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    return;
  }
                    /* try { // try from 0240a004 to 0250a02b has its CatchHandler @ 0240a3d4 */
  if ((*(long *)(param_1 + 0xb8) == 0) ||
     (lVar3 = UnityEngine_Component__get_gameObject_43bcde8(*(long *)(param_1 + 0xb8),0), lVar3 == 0
     )) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004fa8360 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf5bd0,0,0);
    bRam0000000004fa8360 = 1;
  }
  if (lVar3 != 0) {
    lVar5 = *(long *)(lVar3 + 0x10);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar3,0);
    }
    if (pcRam0000000004fa8430 == (code *)0x0) {
      pcRam0000000004fa8430 = (code *)FUN_02132f40(&UNK_00e5f2cc);
    }
                    /* WARNING: Could not recover jumptable at 0x044c1480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fa8430)(lVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

