/* IL2CPP: Dino.BusSand.App.UI.ActivityContinuePanel$$OnOpen
void Dino_BusSand_App_UI_ActivityContinuePanel__OnOpen (Dino_BusSand_App_UI_ActivityContinuePanel_o* __this, Il2CppObject* param, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.ActivityContinuePanel$$OnOpen
   void Dino_BusSand_App_UI_ActivityContinuePanel__OnOpen
   (Dino_BusSand_App_UI_ActivityContinuePanel_o* __this, Il2CppObject* param, const MethodInfo*
   method); */

void Dino_BusSand_App_UI_ActivityContinuePanel__OnOpen_2185b54(long param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined8 *puVar13;
  int *piVar14;
  long *plVar15;
  
  puVar2 = PTR_DAT_04cad8f0;
  if ((bRam0000000004f9b955 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cac7e0);
    FUN_02132f7c(PTR_DAT_04caa458);
    FUN_02132f7c(PTR_DAT_04cad900);
    FUN_02132f7c(PTR_DAT_04cad908);
    FUN_02132f7c(PTR_DAT_04cad910);
    FUN_02132f7c(PTR_DAT_04cad918);
                    /* catch() { ... } // from try @ 02285b20 with catch @ 02285bd0 */
    FUN_02132f7c(PTR_DAT_04cad920);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cad8f0);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cad928);
    FUN_02132f7c(PTR_DAT_04cad930);
    FUN_02132f7c(PTR_DAT_04cad938);
    FUN_02132f7c(PTR_DAT_04cad940);
    FUN_02132f7c(PTR_DAT_04cad460);
    FUN_02132f7c(PTR_DAT_04cad948);
    bRam0000000004f9b955 = 1;
  }
  if (param_2 == (long *)0x0) {
LAB_02285c7c:
    param_2 = (long *)thunk_FUN_0216e89c();
    System_Object___ctor_4870e5c(param_2,0);
  }
  else {
    bVar1 = *(byte *)(*(long *)puVar2 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar2))
    goto LAB_02285c7c;
  }
  puVar6 = PTR_DAT_04cad940;
  puVar5 = PTR_DAT_04cad908;
  puVar4 = PTR_DAT_04cad900;
  puVar3 = PTR_DAT_04caa458;
  puVar2 = PTR_DAT_04ca9ae8;
  if (param_1 != 0) {
    plVar15 = (long *)(param_1 + 0x38);
    *plVar15 = (long)param_2;
    thunk_FUN_02134474(plVar15,param_2);
    uVar7 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Action___ctor_47b5ed0(uVar7,param_1,*(undefined8 *)puVar5,0);
    uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
    System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)puVar4,0);
    Dino_BusSand_App_UI_ActivityContinueUi__BindCommon_218604c(param_1,uVar7,uVar8);
    lVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)puVar6,0);
    if (lVar9 == 0) {
      lVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cad460,0);
    }
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
    if ((uVar10 & 1) != 0) {
      if (lVar9 == 0) goto LAB_02285fa0;
                    /* try { // try from 02285d70 to 02385de3 has its CatchHandler @ 02285d70
                       catch() { ... } // from try @ 02285d70 with catch @ 02285d70
                       catch() { ... } // from try @ 02285df0 with catch @ 02285d70 */
      uVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
      uVar8 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
      System_Action___ctor_47b5ed0(uVar8,param_1,*(undefined8 *)PTR_DAT_04cad910,0);
      Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar7,uVar8,1,*(undefined8 *)PTR_DAT_04cad948,0);
    }
    lVar9 = Dino_BusSand_App_UI_UIPanel__Find_21f4108(param_1,*(undefined8 *)PTR_DAT_04cad938,0);
    lVar12 = *(long *)puVar2;
                    /* try { // try from 02285de4 to 02385def has its CatchHandler @ 02285e20 */
    if (*(int *)(lVar12 + 0xe4) == 0) {
                    /* try { // try from 02285df0 to 02385e3b has its CatchHandler @ 02285d70 */
      thunk_FUN_0218fdac(lVar12);
    }
    uVar10 = UnityEngine_Object__op_Inequality_43c8dec(lVar9,0,0);
    if ((uVar10 & 1) != 0) {
      if (lVar9 == 0) goto LAB_02285fa0;
      uVar7 = UnityEngine_Component__get_gameObject_43bcde8(lVar9,0);
      puVar2 = PTR_DAT_04cad930;
                    /* catch() { ... } // from try @ 02285de4 with catch @ 02285e20 */
      lVar9 = *(long *)PTR_DAT_04cad930;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        thunk_FUN_0218fdac(lVar9);
                    /* try { // try from 02285e3c to 02385f37 has its CatchHandler @ 02285e3c
                       catch() { ... } // from try @ 02285e3c with catch @ 02285e3c
                       catch() { ... } // from try @ 02285f44 with catch @ 02285e3c */
        lVar9 = *(long *)puVar2;
      }
      puVar13 = *(undefined8 **)(lVar9 + 0xb8);
      lVar12 = puVar13[1];
      if (lVar12 == 0) {
        if (*(int *)(lVar9 + 0xe4) == 0) {
          thunk_FUN_0218fdac(lVar9);
          puVar13 = *(undefined8 **)(*(long *)puVar2 + 0xb8);
        }
        uVar8 = *puVar13;
        lVar12 = thunk_FUN_0216e89c(*(undefined8 *)puVar3);
        System_Action___ctor_47b5ed0(lVar12,uVar8,*(undefined8 *)PTR_DAT_04cad928,0);
        plVar11 = (long *)(*(long *)(*(long *)puVar2 + 0xb8) + 8);
        *plVar11 = lVar12;
        thunk_FUN_02134474(plVar11,lVar12);
      }
      Dino_BusSand_App_UI_UIPanel__Bind_21f4ca8(uVar7,lVar12,0,0,0);
    }
    puVar3 = PTR_DAT_04cad918;
    puVar2 = PTR_DAT_04cabaf8;
    uVar7 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cac7e0);
    System_Action_int____ctor_35ef18c(uVar7,param_1,*(undefined8 *)puVar3,0);
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    Dino_BusSand_App_Meta_Profile__add_ItemChanged_226f620(uVar7,0);
    puVar2 = PTR_DAT_04cad920;
    if (*plVar15 != 0) {
      plVar15 = (long *)thunk_FUN_0216e7a0(*(undefined8 *)(*plVar15 + 0x10),
                                           *(undefined8 *)PTR_DAT_04cad920);
      if (plVar15 != (long *)0x0) {
        lVar9 = *plVar15;
        uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
                    /* try { // try from 02285f38 to 02385f43 has its CatchHandler @ 02285f74 */
        if (uVar10 != 0) {
          piVar14 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
          do {
                    /* try { // try from 02285f44 to 02385f8f has its CatchHandler @ 02285e3c */
            if (*(long *)(piVar14 + -2) == *(long *)puVar2) {
                    /* catch() { ... } // from try @ 02285f38 with catch @ 02285f74 */
              puVar13 = (undefined8 *)(lVar9 + (long)*piVar14 * 0x10 + 0x138);
              goto LAB_02285f78;
            }
            uVar10 = uVar10 - 1;
            piVar14 = piVar14 + 4;
          } while (uVar10 != 0);
        }
        puVar13 = (undefined8 *)FUN_0216b7a4(plVar15,*(long *)puVar2,0);
LAB_02285f78:
        (*(code *)*puVar13)(plVar15,param_1,puVar13[1]);
      }
                    /* try { // try from 02285f90 to 02386003 has its CatchHandler @ 02285f90
                       catch() { ... } // from try @ 02285f90 with catch @ 02285f90
                       catch() { ... } // from try @ 02286018 with catch @ 02285f90 */
      return;
    }
  }
LAB_02285fa0:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

