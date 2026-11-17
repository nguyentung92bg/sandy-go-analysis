/* IL2CPP: Dino.BusSand.App.UI.UIRaisedCanvas$$OnEnable
void Dino_BusSand_App_UI_UIRaisedCanvas__OnEnable (Dino_BusSand_App_UI_UIRaisedCanvas_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UIRaisedCanvas$$OnEnable
   void Dino_BusSand_App_UI_UIRaisedCanvas__OnEnable (Dino_BusSand_App_UI_UIRaisedCanvas_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_UIRaisedCanvas__OnEnable_217e270(long param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  puVar3 = PTR_DAT_04cad3d0;
  puVar2 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9b914 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad3d0);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9b914 = 1;
  }
  lVar4 = UnityEngine_Component__GetComponent_object__26f97e8(param_1,*(undefined8 *)puVar3);
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar2);
  }
                    /* try { // try from 0227e2ec to 0237e2ef has its CatchHandler @ 0227e350 */
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar4,0,0);
  if ((uVar5 & 1) != 0) {
    return;
  }
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  UnityEngine_Canvas__set_overrideSorting_467ff6c(lVar4,1,0);
                    /* try { // try from 0227e31c to 0237e323 has its CatchHandler @ 0227e368 */
  UnityEngine_Canvas__set_sortingLayerID_46803d4(lVar4,*(undefined4 *)(param_1 + 0x24),0);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  if ((bRam0000000004fac4d8 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04d09c28,uVar1,0);
    bRam0000000004fac4d8 = 1;
  }
  if (lVar4 != 0) {
    lVar6 = *(long *)(lVar4 + 0x10);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
    }
    if (pcRam0000000004fac5a8 == (code *)0x0) {
      pcRam0000000004fac5a8 = (code *)FUN_02132f40(&UNK_00e436fd);
    }
                    /* WARNING: Could not recover jumptable at 0x0478015c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000004fac5a8)(lVar6,uVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

