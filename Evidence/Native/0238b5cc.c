/* IL2CPP: Dino.BusSand.App.UI.UiKit$$SameSize
void Dino_BusSand_App_UI_UiKit__SameSize (TMPro_TMP_Text_array* texts, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.UiKit$$SameSize
   void Dino_BusSand_App_UI_UiKit__SameSize (TMPro_TMP_Text_array* texts, const MethodInfo* method);
    */

void Dino_BusSand_App_UI_UiKit__SameSize_228b5cc(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  float fVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  
  if ((bRam0000000004f9c181 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c181 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  if (param_1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
    if ((int)*(ulong *)(param_1 + 0x18) < 1) {
      fVar3 = 3.4028235e+38;
    }
    else {
      uVar6 = 0;
      fVar3 = 3.4028235e+38;
      do {
        if (uVar2 <= uVar6) goto LAB_0238b73c;
        plVar4 = *(long **)(param_1 + 0x20 + uVar6 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = UnityEngine_Object__op_Equality_43c6f30(plVar4,0,0);
        if ((uVar2 & 1) == 0) {
          if (plVar4 == (long *)0x0) goto LAB_0238b740;
          (**(code **)(*plVar4 + 0x788))(plVar4,0,0,*(undefined8 *)(*plVar4 + 0x790));
          if (*(float *)((long)plVar4 + 0x20c) <= fVar3) {
            fVar3 = *(float *)((long)plVar4 + 0x20c);
          }
        }
        uVar2 = (ulong)*(uint *)(param_1 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(param_1 + 0x18));
    }
    if ((fVar3 != 3.4028235e+38) && (0 < (int)uVar2)) {
      uVar6 = 0;
      do {
        if (uVar2 <= uVar6) {
LAB_0238b73c:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        lVar5 = *(long *)(param_1 + 0x20 + uVar6 * 8);
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar2 = UnityEngine_Object__op_Equality_43c6f30(lVar5,0,0);
        if ((uVar2 & 1) == 0) {
          if (lVar5 == 0) goto LAB_0238b740;
          TMPro_TMP_Text__set_enableAutoSizing_42cc454(lVar5,0,0);
          TMPro_TMP_Text__set_fontSize_42cc224(fVar3,lVar5,0);
        }
        uVar2 = (ulong)*(uint *)(param_1 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((long)uVar6 < (long)(int)*(uint *)(param_1 + 0x18));
    }
    return;
  }
LAB_0238b740:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

