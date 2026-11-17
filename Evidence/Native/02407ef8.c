/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$BuildWorld
Dino_BusSand_App_UI_KitAdopt_Scope_o* Dino_BusSand_App_UI_HudPanel__BuildWorld (Dino_BusSand_App_UI_HudPanel_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.HudPanel$$BuildWorld
   Dino_BusSand_App_UI_KitAdopt_Scope_o* Dino_BusSand_App_UI_HudPanel__BuildWorld
   (Dino_BusSand_App_UI_HudPanel_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_HudPanel__BuildWorld_2307ef8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
                    /* try { // try from 02407ef8 to 02507efb has its CatchHandler @ 02408460 */
  puVar1 = PTR_DAT_04cac4f8;
                    /* try { // try from 02407f10 to 02507f17 has its CatchHandler @ 0240846c */
  if ((bRam0000000004f9c511 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cacf88);
                    /* try { // try from 02407f38 to 02507f3b has its CatchHandler @ 02408464 */
                    /* try { // try from 02407f3c to 02507f93 has its CatchHandler @ 024084d0 */
    FUN_02132f7c(PTR_DAT_04caa070);
    FUN_02132f7c(PTR_DAT_04cad7b8);
    FUN_02132f7c(PTR_DAT_04cac4f8);
    FUN_02132f7c(PTR_DAT_04cad730);
    FUN_02132f7c(PTR_DAT_04cabdb0);
    FUN_02132f7c(PTR_DAT_04cad748);
    FUN_02132f7c(PTR_DAT_04cad330);
    FUN_02132f7c(PTR_DAT_04cb8008);
    FUN_02132f7c(PTR_DAT_04cb8010);
    FUN_02132f7c(PTR_DAT_04cb8018);
                    /* try { // try from 02407fac to 02507fb3 has its CatchHandler @ 0240843c */
    bRam0000000004f9c511 = 1;
  }
  puVar2 = PTR_DAT_04cb8008;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
                    /* try { // try from 02407fd8 to 02507fdb has its CatchHandler @ 02408428 */
  lVar4 = Dino_BusSand_App_UI_KitPrefabs__Spawn_2181840(*(undefined8 *)puVar2,0,0);
  if (lVar4 == 0) {
                    /* try { // try from 02407ff0 to 02507ff7 has its CatchHandler @ 02408430 */
    plVar5 = (long *)FUN_02133068(*(undefined8 *)PTR_DAT_04cad748,1);
    uVar9 = *(undefined8 *)PTR_DAT_04cad730;
                    /* try { // try from 02408018 to 0250801b has its CatchHandler @ 02408450 */
    if (*(int *)(*(long *)(PTR_DAT_04ca9ac8 + 0xe0) + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)(PTR_DAT_04ca9ac8 + 0xe0));
    }
    lVar4 = System_Type__GetTypeFromHandle_483f0b4(uVar9,0);
                    /* try { // try from 02408030 to 02508037 has its CatchHandler @ 0240844c */
    if (plVar5 == (long *)0x0) goto LAB_024082d0;
    if ((lVar4 != 0) &&
       (lVar6 = thunk_FUN_0216e7a0(lVar4,*(undefined8 *)(*plVar5 + 0x40)), lVar6 == 0)) {
      uVar9 = thunk_FUN_0217c344();
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 024082e8 to 02508357 has its CatchHandler @ 0240870c */
      FUN_021330e8(uVar9,0);
    }
    if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
                    /* try { // try from 02408058 to 0250805b has its CatchHandler @ 02408440 */
                    /* try { // try from 0240805c to 025080b3 has its CatchHandler @ 024084ac */
    plVar5[4] = lVar4;
    thunk_FUN_02134474(plVar5 + 4,lVar4);
    lVar4 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04caa070);
    UnityEngine_GameObject___ctor_43c2310(lVar4,*(undefined8 *)puVar2,plVar5,0);
    if (lVar4 == 0) goto LAB_024082d0;
  }
  puVar3 = PTR_DAT_04cad7b8;
  puVar1 = PTR_DAT_04cacf88;
  uVar9 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar3);
  }
                    /* try { // try from 024080c4 to 025080cb has its CatchHandler @ 024084d4 */
                    /* try { // try from 024080cc to 025080d7 has its CatchHandler @ 02408490 */
  uVar9 = Dino_BusSand_App_UI_KitAdopt__Begin_227d2a0(uVar9,*(undefined8 *)puVar2,0);
  UnityEngine_GameObject__set_layer_43c11cc(lVar4,0,0);
                    /* try { // try from 024080e8 to 02508153 has its CatchHandler @ 024084b4 */
  lVar6 = UnityEngine_GameObject__AddComponent_object__275a54c(lVar4,*(undefined8 *)puVar1);
  plVar5 = (long *)(param_1 + 0xb8);
  *plVar5 = lVar6;
  thunk_FUN_02134474(plVar5,lVar6);
  if (*plVar5 != 0) {
    UnityEngine_Canvas__set_renderMode_467f2b4(*plVar5,2,0);
    if (*plVar5 != 0) {
      UnityEngine_Behaviour__set_enabled_43bc50c(*plVar5,0,0);
      plVar5 = (long *)UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
      if (cRam0000000004f9b948 == '\0') {
        FUN_02132f7c(PTR_DAT_04cacfc0);
        cRam0000000004f9b948 = '\x01';
      }
      puVar2 = PTR_DAT_04cad330;
      puVar1 = PTR_DAT_04cacfc0;
      if (plVar5 != (long *)0x0) {
                    /* try { // try from 02408164 to 0250816b has its CatchHandler @ 024084d0 */
        if (*plVar5 != *(long *)PTR_DAT_04cabdb0) {
                    /* try { // try from 024082d4 to 025082df has its CatchHandler @ 024086d4 */
                    /* WARNING: Subroutine does not return */
          FUN_021335a4(plVar5);
        }
                    /* try { // try from 0240817c to 02508183 has its CatchHandler @ 024084ac */
                    /* try { // try from 024081a0 to 025081a3 has its CatchHandler @ 024086e8 */
        UnityEngine_RectTransform__set_sizeDelta_43cfa70
                  (**(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8),
                   (*(undefined4 **)(*(long *)PTR_DAT_04cacfc0 + 0xb8))[1],plVar5,0);
        uVar7 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
        if (cRam0000000004f9b948 == '\0') {
                    /* try { // try from 024081c0 to 025081cb has its CatchHandler @ 024086e0 */
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
        puVar3 = PTR_DAT_04cb8010;
        puVar8 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
                    /* try { // try from 024081e8 to 025081ef has its CatchHandler @ 02408510 */
        uVar10 = *puVar8;
        uVar11 = puVar8[1];
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        puVar2 = PTR_DAT_04cb8018;
                    /* try { // try from 02408214 to 0250821b has its CatchHandler @ 024084e4 */
        uVar7 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                          (uVar10,uVar11,0,0,uVar7,*(undefined8 *)puVar3,0,0,0);
        *(undefined8 *)(param_1 + 0xc0) = uVar7;
        thunk_FUN_02134474();
                    /* try { // try from 02408234 to 0250824b has its CatchHandler @ 024084e8 */
        uVar7 = UnityEngine_GameObject__get_transform_43c1048(lVar4,0);
        if (cRam0000000004f9b948 == '\0') {
          FUN_02132f7c(PTR_DAT_04cacfc0);
          cRam0000000004f9b948 = '\x01';
        }
                    /* try { // try from 02408260 to 02508277 has its CatchHandler @ 024084dc */
        puVar8 = *(undefined4 **)(*(long *)puVar1 + 0xb8);
        uVar7 = Dino_BusSand_App_UI_UiKit__Node_22818c4
                          (*puVar8,puVar8[1],0,0,uVar7,*(undefined8 *)puVar2,0,0,0);
                    /* try { // try from 0240828c to 02508297 has its CatchHandler @ 02408508 */
        *(undefined8 *)(param_1 + 200) = uVar7;
        thunk_FUN_02134474((undefined8 *)(param_1 + 200),uVar7);
        if (*(long *)(param_1 + 0xb8) != 0) {
          UnityEngine_Canvas__set_additionalShaderChannels_4680600(*(long *)(param_1 + 0xb8),0x19,0)
          ;
                    /* try { // try from 024082b4 to 025082b7 has its CatchHandler @ 024086dc */
          return uVar9;
        }
      }
    }
  }
LAB_024082d0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

