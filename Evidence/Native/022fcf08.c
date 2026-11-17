/* IL2CPP: Dino.BusSand.App.UI.ScreenCover$$OnEndFrame
void Dino_BusSand_App_UI_ScreenCover__OnEndFrame (UnityEngine_Rendering_ScriptableRenderContext_o ctx, System_Collections_Generic_List_Camera__o* cameras, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ScreenCover$$OnEndFrame
   void Dino_BusSand_App_UI_ScreenCover__OnEndFrame (UnityEngine_Rendering_ScriptableRenderContext_o
   ctx, System_Collections_Generic_List_Camera__o* cameras, const MethodInfo* method); */

void Dino_BusSand_App_UI_ScreenCover__OnEndFrame_21fcf08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_DAT_04cb19a8;
  if ((bRam0000000004f9bc70 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb19a8);
                    /* try { // try from 022fcf3c to 023fcf4b has its CatchHandler @ 022fd000 */
    bRam0000000004f9bc70 = 1;
  }
  puVar1 = PTR_DAT_04ca9ae8;
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
                    /* try { // try from 022fcf58 to 023fcf63 has its CatchHandler @ 022fcff0 */
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  uVar7 = *(undefined8 *)(*(long *)(lVar3 + 0xb8) + 0x18);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 022fcf78 to 023fcf7b has its CatchHandler @ 022fcfec */
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
                    /* try { // try from 022fcf7c to 023fcfe7 has its CatchHandler @ 022fceec */
  uVar4 = UnityEngine_Object__op_Equality_43c6f30(uVar7,0,0);
  if ((uVar4 & 1) != 0) {
    return;
  }
  lVar3 = *(long *)puVar2;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar3 = *(long *)puVar2;
  }
  lVar5 = *(long *)(*(long *)(lVar3 + 0xb8) + 0x18);
  if (lVar5 != 0) {
    UnityEngine_Camera__set_cullingMask_435768c
              (lVar5,*(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x20),0);
    puVar6 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x18);
    *puVar6 = 0;
    if (iRam00000000051c1b10 != 0) {
      FUN_02220bf0(1L << ((ulong)puVar6 >> 0xc & 0x3f),
                   ((ulong)puVar6 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

