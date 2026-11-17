/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$Homecoming
void Dino_BusSand_App_UI_HomePanel__Homecoming (Dino_BusSand_App_UI_HomePanel_o* __this, int32_t won, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomePanel$$Homecoming
   void Dino_BusSand_App_UI_HomePanel__Homecoming (Dino_BusSand_App_UI_HomePanel_o* __this, int32_t
   won, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomePanel__Homecoming_22eafc0(long param_1,int param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_DAT_04ca9ae8;
  if ((bRam0000000004f9c43d & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c43d = 1;
  }
  uVar7 = *(undefined8 *)(param_1 + 0x50);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Object__op_Inequality_43c8dec(uVar7,0,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x50);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if (((0 < param_2) && (*(int *)(lVar4 + 0x58) + -1 == param_2)) &&
     (uVar3 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(lVar4,0,0), (uVar3 & 1) != 0)) {
    lVar2 = Dino_BusSand_App_UI_HomeAtelier__HomecomingRoutine_22d913c(lVar4,param_2);
    if (lVar2 == 0) {
      thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
      uVar5 = thunk_FUN_0216e89c();
      uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
      System_NullReferenceException___ctor_483267c(uVar5,uVar7,0);
    }
    else {
      uVar3 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
      if ((uVar3 & 1) != 0) {
        if ((bRam0000000004fa84ef & 1) == 0) {
          FUN_02132f7c(PTR_DAT_04cf7890);
          bRam0000000004fa84ef = 1;
        }
        if (lVar4 != 0) {
          lVar6 = *(long *)(lVar4 + 0x10);
          if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(lVar4,0);
          }
          if (pcRam0000000004fa8560 == (code *)0x0) {
            pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
          }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam0000000004fa8560)(lVar6,lVar2);
          return;
        }
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      thunk_FUN_021985a8(PTR_DAT_04caa3a8);
      uVar5 = thunk_FUN_0216e89c();
      uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
      System_ArgumentException___ctor_47b660c(uVar5,uVar7,0);
    }
    uVar7 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
    FUN_021330e8(uVar5,uVar7);
  }
  return;
}

