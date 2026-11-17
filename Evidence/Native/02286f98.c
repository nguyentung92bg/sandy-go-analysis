/* IL2CPP: Dino.BusSand.App.UI.ActivityContinuePanel$$OnCloseClick
void Dino_BusSand_App_UI_ActivityContinuePanel__OnCloseClick (Dino_BusSand_App_UI_ActivityContinuePanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ActivityContinuePanel$$OnCloseClick
   void Dino_BusSand_App_UI_ActivityContinuePanel__OnCloseClick
   (Dino_BusSand_App_UI_ActivityContinuePanel_o* __this, const MethodInfo* method); */

void Dino_BusSand_App_UI_ActivityContinuePanel__OnCloseClick_2186f98(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((bRam0000000004f9b959 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cada18);
    bRam0000000004f9b959 = 1;
  }
  puVar1 = PTR_DAT_04caa458;
  if ((*(char *)(param_1 + 0x40) != '\0') || (*(char *)(param_1 + 0x2c) != '\0')) {
    return;
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  uVar2 = thunk_FUN_0216e89c(*(undefined8 *)puVar1);
  System_Action___ctor_47b5ed0(uVar2,param_1,*(undefined8 *)PTR_DAT_04cada18,0);
  lVar3 = Dino_BusSand_App_UI_ActivityContinuePanel__CloseThen_2187260(param_1,uVar2);
  uVar4 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (lVar3 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
    uVar5 = thunk_FUN_0216e89c();
    uVar2 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
    System_NullReferenceException___ctor_483267c(uVar5,uVar2,0);
  }
  else {
    uVar4 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
    if ((uVar4 & 1) != 0) {
      if ((bRam0000000004fa84ef & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cf7890);
        bRam0000000004fa84ef = 1;
      }
      if (param_1 != 0) {
        lVar6 = *(long *)(param_1 + 0x10);
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
        }
        if (pcRam0000000004fa8560 == (code *)0x0) {
          pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
        }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam0000000004fa8560)(lVar6,lVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    thunk_FUN_021985a8(PTR_DAT_04caa3a8);
    uVar5 = thunk_FUN_0216e89c();
    uVar2 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
    System_ArgumentException___ctor_47b660c(uVar5,uVar2,0);
  }
  uVar2 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar5,uVar2);
}

