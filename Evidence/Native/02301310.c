/* IL2CPP: Dino.BusSand.App.UI.ScaleButton$$Go
void Dino_BusSand_App_UI_ScaleButton__Go (Dino_BusSand_App_UI_ScaleButton_o* __this, bool release, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ScaleButton$$Go
   void Dino_BusSand_App_UI_ScaleButton__Go (Dino_BusSand_App_UI_ScaleButton_o* __this, bool
   release, const MethodInfo* method); */

void Dino_BusSand_App_UI_ScaleButton__Go_2201310(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  uVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_1,0);
  if ((uVar1 & 1) != 0) {
    plVar4 = (long *)(param_1 + 0x48);
    if (*plVar4 != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,*plVar4,0);
    }
    if ((param_2 & 1) == 0) {
      uVar2 = Dino_BusSand_App_UI_ScaleButton__Press_2201408(param_1);
    }
    else {
      uVar2 = Dino_BusSand_App_UI_ScaleButton__Spring_2201474();
    }
    uVar2 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar2,0);
    *(undefined8 *)(param_1 + 0x48) = uVar2;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)plVar4 >> 0xc & 0x3f),
                   ((ulong)plVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  lVar3 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
  fStack_2c = *(float *)(param_1 + 0x38);
  fStack_28 = *(float *)(param_1 + 0x3c);
  fStack_24 = *(float *)(param_1 + 0x40);
  if ((param_2 & 1) == 0) {
    fVar5 = *(float *)(param_1 + 0x28);
    fStack_2c = fStack_2c * fVar5;
    fStack_28 = fStack_28 * fVar5;
    fStack_24 = fStack_24 * fVar5;
  }
  if (lVar3 != 0) {
    if ((bRam0000000004fa8b3e & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7a00,0);
      bRam0000000004fa8b3e = 1;
    }
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar3 + 0x10);
      if (lVar3 != 0) {
        if (pcRam0000000004fa8bf0 == (code *)0x0) {
          pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
        }
        (*pcRam0000000004fa8bf0)(lVar3,&fStack_2c);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

