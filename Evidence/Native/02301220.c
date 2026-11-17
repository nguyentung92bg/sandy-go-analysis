/* IL2CPP: Dino.BusSand.App.UI.ScaleButton$$OnPointerDown
void Dino_BusSand_App_UI_ScaleButton__OnPointerDown (Dino_BusSand_App_UI_ScaleButton_o* __this, UnityEngine_EventSystems_PointerEventData_o* e, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x0230134c) */
/* IL2CPP: Dino.BusSand.App.UI.ScaleButton$$OnPointerDown
   void Dino_BusSand_App_UI_ScaleButton__OnPointerDown (Dino_BusSand_App_UI_ScaleButton_o* __this,
   UnityEngine_EventSystems_PointerEventData_o* e, const MethodInfo* method); */

void Dino_BusSand_App_UI_ScaleButton__OnPointerDown_2201220
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uVar5;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  
  if ((bRam0000000004f9bca1 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cab238);
    bRam0000000004f9bca1 = 1;
  }
  if (*(char *)(param_4 + 0x44) == '\0') {
    lVar1 = UnityEngine_Component__get_transform_43bcd18(param_4,0);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar5 = UnityEngine_Transform__get_localScale_43d1b0c(lVar1,0);
    *(undefined4 *)(param_4 + 0x38) = uVar5;
    *(undefined4 *)(param_4 + 0x3c) = param_2;
    *(undefined4 *)(param_4 + 0x40) = param_3;
    *(undefined1 *)(param_4 + 0x44) = 1;
  }
  *(undefined1 *)(param_4 + 0x45) = 1;
  uVar2 = System_String__IsNullOrEmpty_46d2084(*(undefined8 *)(param_4 + 0x20),0);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_4 + 0x20);
    if (*(int *)(*(long *)PTR_DAT_04cab1e8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Audio__Play_214da60(0x3f800000,uVar3,0);
  }
  if (*(char *)(param_4 + 0x34) != '\0') {
    if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_Haptics__Play_2388ed8(0,0);
  }
  uVar2 = UnityEngine_Behaviour__get_isActiveAndEnabled_43bc5d0(param_4,0);
  if ((uVar2 & 1) != 0) {
    plVar4 = (long *)(param_4 + 0x48);
    if (*plVar4 != 0) {
      UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_4,*plVar4,0);
    }
    uVar3 = Dino_BusSand_App_UI_ScaleButton__Press_2201408(param_4);
    uVar3 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_4,uVar3,0);
    *(undefined8 *)(param_4 + 0x48) = uVar3;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)plVar4 >> 0xc & 0x3f),
                   ((ulong)plVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
  lVar1 = UnityEngine_Component__get_transform_43bcd18(param_4,0);
  fStack_24 = *(float *)(param_4 + 0x28);
  fStack_2c = *(float *)(param_4 + 0x38) * fStack_24;
  fStack_28 = *(float *)(param_4 + 0x3c) * fStack_24;
  fStack_24 = *(float *)(param_4 + 0x40) * fStack_24;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  if ((bRam0000000004fa8b3e & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cf7a00,0);
    bRam0000000004fa8b3e = 1;
  }
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
  lVar1 = *(long *)(lVar1 + 0x10);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
  }
  if (pcRam0000000004fa8bf0 == (code *)0x0) {
    pcRam0000000004fa8bf0 = (code *)FUN_02132f40(&UNK_00e685b7);
  }
  (*pcRam0000000004fa8bf0)(lVar1,&fStack_2c);
  return;
}

