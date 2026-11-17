/* IL2CPP: Dino.BusSand.App.UI.SystemOpenPanel$$ApplyArrowMirror
void Dino_BusSand_App_UI_SystemOpenPanel__ApplyArrowMirror (Dino_BusSand_App_UI_SystemOpenPanel_o* __this, bool mirror, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.SystemOpenPanel$$ApplyArrowMirror
   void Dino_BusSand_App_UI_SystemOpenPanel__ApplyArrowMirror
   (Dino_BusSand_App_UI_SystemOpenPanel_o* __this, bool mirror, const MethodInfo* method); */

void Dino_BusSand_App_UI_SystemOpenPanel__ApplyArrowMirror_21e737c(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined4 uVar7;
  
  puVar2 = PTR_DAT_04cb0ee8;
  puVar1 = PTR_DAT_04ca9ae8;
                    /* catch() { ... } // from try @ 022e7050 with catch @ 022e7390
                       catch() { ... } // from try @ 022e72dc with catch @ 022e7390 */
                    /* catch() { ... } // from try @ 022e7684 with catch @ 022e73a4
                       catch() { ... } // from try @ 022e7780 with catch @ 022e73a4 */
  if ((bRam0000000004f9bbd5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cb0ee8);
    FUN_02132f7c(PTR_DAT_04cae2b8);
    bRam0000000004f9bbd5 = 1;
  }
  lVar3 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar2,0);
  lVar6 = *(long *)puVar1;
  if (*(int *)(lVar6 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar6);
  }
                    /* try { // try from 022e7418 to 023e742f has its CatchHandler @ 022e77c0 */
  uVar4 = UnityEngine_Object__op_Inequality_43c8dec(lVar3,0,0);
  if ((uVar4 & 1) != 0) {
    if ((param_2 & 1) == 0) {
      if (cRam0000000004f9b65e == '\0') {
        FUN_02132f7c(PTR_DAT_04caa208);
        cRam0000000004f9b65e = '\x01';
      }
                    /* try { // try from 022e7468 to 023e7477 has its CatchHandler @ 022e77b8 */
      uVar7 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04caa208 + 0xb8) + 0xc);
    }
    else {
      uVar7 = 0xbf800000;
    }
    if (lVar3 == 0) goto LAB_022e755c;
    UnityEngine_Transform__set_localScale_43d1be0(uVar7,lVar3,0);
  }
  plVar5 = (long *)Dino_BusSand_App_UI_UIPanel__Find_21f4108
                             (param_1,*(undefined8 *)PTR_DAT_04cae2b8,0);
  if (plVar5 == (long *)0x0) {
    plVar5 = (long *)0x0;
  }
  else {
                    /* try { // try from 022e74a4 to 023e74fb has its CatchHandler @ 022e7834 */
    if (*plVar5 != *(long *)PTR_DAT_04cabdb0) {
      plVar5 = (long *)0x0;
    }
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(plVar5,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  if (plVar5 != (long *)0x0) {
    UnityEngine_Transform__get_localPosition_43cfce8(plVar5,0);
    UnityEngine_RectTransform__get_sizeDelta_43cf9ac(plVar5,0);
                    /* try { // try from 022e753c to 023e756b has its CatchHandler @ 022e77a8 */
    if ((bRam0000000004fa8b33 & 1) == 0) {
      FUN_02132f7c(PTR_DAT_04cf7a00,0);
      bRam0000000004fa8b33 = 1;
    }
    if (plVar5 != (long *)0x0) {
      lVar3 = plVar5[2];
      if (lVar3 != 0) {
        if (pcRam0000000004fa8b98 == (code *)0x0) {
          pcRam0000000004fa8b98 = (code *)FUN_02132f40(&UNK_00e52061);
        }
        (*pcRam0000000004fa8b98)(lVar3,&stack0xffffffffffffffd4);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_43c5f78();
    }
                    /* WARNING: Subroutine does not return */
    FUN_02133224();
  }
LAB_022e755c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

