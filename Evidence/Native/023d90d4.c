/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Homecoming
void Dino_BusSand_App_UI_HomeAtelier__Homecoming (Dino_BusSand_App_UI_HomeAtelier_o* __this, int32_t won, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier$$Homecoming
   void Dino_BusSand_App_UI_HomeAtelier__Homecoming (Dino_BusSand_App_UI_HomeAtelier_o* __this,
   int32_t won, const MethodInfo* method); */

void Dino_BusSand_App_UI_HomeAtelier__Homecoming_22d90d4(long param_1,int param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  if (0 < param_2) {
    if ((*(int *)(param_1 + 0x58) + -1 == param_2) &&
       (uVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0), (uVar1 & 1) != 0))
    {
      lVar2 = Dino_BusSand_App_UI_HomeAtelier__HomecomingRoutine_22d913c(param_1,param_2);
      if (lVar2 == 0) {
        thunk_FUN_021985a8(PTR_DAT_04cc27e8,0,0);
        uVar3 = thunk_FUN_0216e89c();
        uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78c8);
        System_NullReferenceException___ctor_483267c(uVar3,uVar4,0);
      }
      else {
        uVar1 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_43c3a54();
        if ((uVar1 & 1) != 0) {
          if ((bRam0000000004fa84ef & 1) == 0) {
            FUN_02132f7c(PTR_DAT_04cf7890);
            bRam0000000004fa84ef = 1;
          }
          if (param_1 != 0) {
            lVar5 = *(long *)(param_1 + 0x10);
            if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
              UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78(param_1,0);
            }
            if (pcRam0000000004fa8560 == (code *)0x0) {
              pcRam0000000004fa8560 = (code *)FUN_02132f40(&UNK_00e327ec);
            }
                    /* WARNING: Could not recover jumptable at 0x044c3dd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam0000000004fa8560)(lVar5,lVar2);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        thunk_FUN_021985a8(PTR_DAT_04caa3a8);
        uVar3 = thunk_FUN_0216e89c();
        uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78b0);
        System_ArgumentException___ctor_47b660c(uVar3,uVar4,0);
      }
      uVar4 = thunk_FUN_021985a8(PTR_DAT_04cf78d0);
                    /* WARNING: Subroutine does not return */
      FUN_021330e8(uVar3,uVar4);
    }
  }
  return;
}

