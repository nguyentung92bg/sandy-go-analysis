/* IL2CPP: Dino.BusSand.App.UI.ScreenCover$$OnEnable
void Dino_BusSand_App_UI_ScreenCover__OnEnable (Dino_BusSand_App_UI_ScreenCover_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ScreenCover$$OnEnable
   void Dino_BusSand_App_UI_ScreenCover__OnEnable (Dino_BusSand_App_UI_ScreenCover_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_UI_ScreenCover__OnEnable_21fc6f0(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar4 = PTR_DAT_04cb19b8;
  puVar3 = PTR_DAT_04cb19b0;
  puVar2 = PTR_DAT_04cb19a8;
                    /* try { // try from 022fc720 to 023fc733 has its CatchHandler @ 022fc910 */
  if ((bRam0000000004f9bc6c & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb19c0);
    FUN_02132f7c(PTR_DAT_04cb19b8);
                    /* try { // try from 022fc73c to 023fc743 has its CatchHandler @ 022fc8f8 */
                    /* try { // try from 022fc744 to 023fc79f has its CatchHandler @ 022fc47c */
    FUN_02132f7c(PTR_DAT_04cb19b0);
    FUN_02132f7c(PTR_DAT_04cb19c8);
    FUN_02132f7c(PTR_DAT_04cb19d0);
    FUN_02132f7c(PTR_DAT_04cb19d8);
    FUN_02132f7c(PTR_DAT_04cb19e0);
    FUN_02132f7c(PTR_DAT_04cb19a8);
    bRam0000000004f9bc6c = 1;
  }
  uVar6 = UnityEngine_Component__GetComponent_object__26f97e8(param_1,*(undefined8 *)puVar3);
                    /* try { // try from 022fc7a0 to 023fc7b3 has its CatchHandler @ 022fc8fc */
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  thunk_FUN_02134474();
  uVar6 = UnityEngine_Component__GetComponentInParent_object__26f9d74(param_1,*(undefined8 *)puVar4)
  ;
                    /* try { // try from 022fc7bc to 023fc7c3 has its CatchHandler @ 022fc8f4 */
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  thunk_FUN_02134474();
                    /* try { // try from 022fc7c4 to 023fc983 has its CatchHandler @ 022fc47c */
  lVar7 = *(long *)puVar2;
  if (*(int *)(lVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar7 = *(long *)puVar2;
  }
  lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 8);
  if (lVar7 != 0) {
    lVar8 = *(long *)(lVar7 + 0x10);
    lVar10 = *(long *)PTR_DAT_04cb19c8;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (lVar8 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (uVar1 < *(uint *)(lVar8 + 0x18)) {
        *(uint *)(lVar7 + 0x18) = uVar1 + 1;
        plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
        *plVar9 = param_1;
        thunk_FUN_02134474(plVar9,param_1);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize_3a81bf4
                  (lVar7,param_1,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70))
        ;
      }
      lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
      if (*(char *)(lVar7 + 0x10) != '\0') {
        return;
      }
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)(*(long *)puVar2 + 0xb8);
      }
      puVar2 = PTR_DAT_04cb19c0;
      *(undefined1 *)(lVar7 + 0x10) = 1;
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
      System_Action_ScriptableRenderContext__object____ctor_35f82d0
                (uVar6,0,*(undefined8 *)PTR_DAT_04cb19d8,0);
      if (*(int *)(*(long *)PTR_DAT_04cb19d0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      UnityEngine_Rendering_RenderPipelineManager__add_beginContextRendering_43ed4f8(uVar6,0);
      uVar6 = thunk_FUN_0216e89c(*(undefined8 *)puVar2);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fc7bc with catch @ 022fc8f4
                        */
      System_Action_ScriptableRenderContext__object____ctor_35f82d0
                (uVar6,0,*(undefined8 *)PTR_DAT_04cb19e0,0);
      puVar2 = PTR_DAT_04cb19d0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fc73c with catch @ 022fc8f8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fc7a0 with catch @ 022fc8fc
                        */
      if ((bRam0000000004fa9276 & 1) == 0) {
        FUN_02132f7c(PTR_DAT_04cb19c0,0);
        FUN_02132f7c(PTR_DAT_04cb19d0);
        bRam0000000004fa9276 = 1;
      }
      lVar7 = *(long *)puVar2;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar2;
      }
      puVar3 = PTR_DAT_04cb19c0;
      lVar7 = *(long *)(*(long *)(lVar7 + 0xb8) + 0x28);
      do {
        lVar8 = System_Delegate__Combine_4872324(lVar7,uVar6,0);
        if (lVar8 == 0) {
          lVar10 = 0;
        }
        else {
          uVar11 = *(undefined8 *)puVar3;
          lVar10 = thunk_FUN_0216e7a0(lVar8,uVar11);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_021335a4(lVar8,uVar11);
          }
        }
        lVar8 = *(long *)puVar2;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar2;
        }
        lVar8 = FUN_0216aff4(*(long *)(lVar8 + 0xb8) + 0x28,lVar10,lVar7);
        bVar5 = lVar8 != lVar7;
        lVar7 = lVar8;
      } while (bVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 022fc720 with catch @ 022fc910
                        */
  FUN_02133224();
}

