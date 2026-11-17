/* IL2CPP: Dino.BusSand.App.UI.EventListPanel$$Update
void Dino_BusSand_App_UI_EventListPanel__Update (Dino_BusSand_App_UI_EventListPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.EventListPanel$$Update
   void Dino_BusSand_App_UI_EventListPanel__Update (Dino_BusSand_App_UI_EventListPanel_o* __this,
   const MethodInfo* method); */

void Dino_BusSand_App_UI_EventListPanel__Update_21b8244(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long extraout_x1;
  undefined8 uVar5;
  float fVar6;
  
  if ((bRam0000000004f9baa9 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04ca9c30);
    bRam0000000004f9baa9 = 1;
  }
  fVar6 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
  if ((*(float *)(param_1 + 0x6c) <= fVar6) && (*(long *)(param_1 + 0x38) != 0)) {
    uVar5 = *(undefined8 *)(param_1 + 0x58);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar1 = UnityEngine_Object__op_Equality_43c6f30(uVar5,0,0);
    if ((uVar1 & 1) == 0) {
      fVar6 = (float)UnityEngine_Time__get_unscaledTime_43cd610(0);
      plVar2 = *(long **)(param_1 + 0x38);
      *(float *)(param_1 + 0x6c) = fVar6 + 1.0;
      lVar3 = 0;
      lVar4 = extraout_x1;
      if (plVar2 != (long *)0x0) {
        lVar3 = (**(code **)(*plVar2 + 0x198))(plVar2,*(undefined8 *)(*plVar2 + 0x1a0));
        plVar2 = *(long **)(param_1 + 0x58);
        if (lVar3 < 1) {
          lVar4 = *(long *)PTR_DAT_04ca9c30;
        }
        else {
          lVar4 = Dino_BusSand_App_UI_EventKit__EndsIn_21b8344();
          lVar3 = lVar4;
        }
        if (plVar2 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x022b832c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x518))(plVar2,lVar4,*(undefined8 *)(*plVar2 + 0x520));
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_02133224(lVar3,lVar4);
    }
  }
  return;
}

