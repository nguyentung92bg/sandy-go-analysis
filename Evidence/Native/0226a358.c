/* IL2CPP: Dino.BusSand.App.GameApp$$<QuitClosed>b__114_0
void Dino_BusSand_App_GameApp___QuitClosed_b__114_0 (Dino_BusSand_App_GameApp_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x02267f14) */
/* WARNING: Removing unreachable block (ram,0x02267d40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.GameApp$$<QuitClosed>b__114_0
   void Dino_BusSand_App_GameApp___QuitClosed_b__114_0 (Dino_BusSand_App_GameApp_o* __this, const
   MethodInfo* method); */

void Dino_BusSand_App_GameApp___QuitClosed_b__114_0_216a358(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  if ((bRam0000000004f9b874 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1e8);
    FUN_02132f7c(PTR_DAT_04cac450);
    FUN_02132f7c(PTR_DAT_04cac458);
    FUN_02132f7c(PTR_DAT_04cac6d8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cac678);
    FUN_02132f7c(PTR_DAT_04cac580);
    FUN_02132f7c(PTR_DAT_04cac6e0);
    FUN_02132f7c(PTR_DAT_04cac6e8);
    FUN_02132f7c(PTR_DAT_04cac6f0);
    FUN_02132f7c(PTR_DAT_04cac6f8);
    FUN_02132f7c(PTR_DAT_04cac700);
    FUN_02132f7c(PTR_DAT_04cac5e8);
    FUN_02132f7c(PTR_DAT_04cac6d0);
    FUN_02132f7c(PTR_DAT_04cac708);
    FUN_02132f7c(PTR_DAT_04cac710);
    FUN_02132f7c(PTR_DAT_04cac718);
    FUN_02132f7c(PTR_DAT_04cac720);
    FUN_02132f7c(PTR_DAT_04cac728);
    FUN_02132f7c(PTR_DAT_04cac730);
    FUN_02132f7c(PTR_DAT_04cac738);
    bRam0000000004f9b874 = 1;
  }
  puVar1 = PTR_DAT_04cac450;
  if (*(char *)(param_1 + 0x50) != '\0') {
    return;
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_App_CrashContext__Step_216db44
            (*(undefined8 *)PTR_DAT_04cac728,*(undefined8 *)PTR_DAT_04cac718,0);
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_02267f5c;
  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
            (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac6e0);
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_02267f5c;
  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
            (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac6d0);
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_02267f5c;
  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
            (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac700);
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_02267f5c;
  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
            (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac6f8);
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_02267f5c;
  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
            (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac5e8);
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_02267f5c;
  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
            (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac678);
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_02267f5c;
  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
            (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac580);
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_02267f5c;
  Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
            (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac6f0);
  puVar1 = PTR_DAT_04ca9ae8;
  plVar9 = (long *)(param_1 + 0x48);
  lVar10 = *plVar9;
  if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar5 = UnityEngine_Object__op_Inequality_43c8dec(lVar10,0,0);
  if ((uVar5 & 1) != 0) {
    if (*plVar9 == 0) goto LAB_02267f5c;
    Dino_BusSand_App_UI_UIPanel__Close_21f509c(*plVar9,0);
    *plVar9 = 0;
    thunk_FUN_02134474(plVar9,0);
  }
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_02267f5c;
  Dino_BusSand_App_Gameplay_GameplayController__Unload_229f9f8(*(long *)(param_1 + 0x20),0);
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (lVar10 = Dino_BusSand_App_Gameplay_GameplayController__get_Cam_229b328
                         (*(long *)(param_1 + 0x20),0), lVar10 == 0)) goto LAB_02267f5c;
  UnityEngine_Behaviour__set_enabled_43bc50c(lVar10,0,0);
  puVar2 = PTR_DAT_04cac458;
  lVar10 = *(long *)PTR_DAT_04cac458;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar10 = *(long *)puVar2;
  }
  if (*(char *)(*(long *)(lVar10 + 0xb8) + 5) != '\0') {
    plVar9 = (long *)(param_1 + 0x30);
    lVar10 = *plVar9;
    if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar5 = UnityEngine_Object__op_Equality_43c6f30(lVar10,0,0);
    if ((uVar5 & 1) != 0) {
      uVar6 = UnityEngine_Component__get_transform_43bcd18(param_1,0);
      if (*(int *)(*(long *)PTR_DAT_04cac6d8 + 0xe4) == 0) {
        thunk_FUN_0218fdac(*(long *)PTR_DAT_04cac6d8);
      }
      lVar10 = Dino_BusSand_App_UI_HallScene__Create_22d0c80(uVar6,0);
      *plVar9 = lVar10;
      thunk_FUN_02134474(plVar9,lVar10);
    }
    lVar10 = *plVar9;
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar3 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
    if (lVar10 != 0) {
      Dino_BusSand_App_UI_HallScene__Show_22d0fd8(lVar10,uVar3,*(undefined4 *)(param_1 + 0x44),0);
      if ((*(long *)(param_1 + 0x30) != 0) && (*(long *)(param_1 + 0x28) != 0)) {
        Dino_BusSand_App_UI_UIManager__AttachTo_21fdf64
                  (*(long *)(param_1 + 0x28),*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x20),0);
        puVar1 = PTR_DAT_04cab1e8;
        *(undefined1 *)(param_1 + 0x39) = 1;
        if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Audio__PlayMusic_214db34(_UNK_00e20094,*(undefined8 *)PTR_DAT_04cac730);
        if (*(long *)(param_1 + 0x28) != 0) {
          Dino_BusSand_App_UI_UIManager__CloseAll_object__29450e0
                    (*(long *)(param_1 + 0x28),*(undefined8 *)PTR_DAT_04cac6e8);
          lVar10 = *(long *)(param_1 + 0x28);
          auStack_38[0] = 1;
          uVar6 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x28),auStack_38);
          if (lVar10 != 0) {
            Dino_BusSand_App_UI_UIManager__Open_object__2945314
                      (lVar10,*(undefined8 *)PTR_DAT_04cac720,1,uVar6,
                       *(undefined8 *)PTR_DAT_04cac710);
            lVar10 = *(long *)(param_1 + 0x80);
            if (lVar10 != 0) {
              UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,lVar10,0);
            }
            uVar6 = Dino_BusSand_App_GameApp__RunHallQueue_2169ad4(param_1,1);
            uVar6 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar6,0);
            *(undefined8 *)(param_1 + 0x80) = uVar6;
            thunk_FUN_02134474((long *)(param_1 + 0x80),uVar6);
            return;
          }
        }
      }
    }
    goto LAB_02267f5c;
  }
  lVar10 = Dino_BusSand_App_GameApp__HomeCamera_2169884(param_1);
  if (lVar10 == 0) goto LAB_02267f5c;
  UnityEngine_Behaviour__set_enabled_43bc50c(lVar10,1,0);
  if (*(long *)(param_1 + 0x28) == 0) goto LAB_02267f5c;
  Dino_BusSand_App_UI_UIManager__AttachTo_21fdf64(*(long *)(param_1 + 0x28),lVar10,0);
  if ((*(char *)(param_1 + 0x78) == '\0') || (iVar8 = *(int *)(param_1 + 0x44), iVar8 < 1)) {
LAB_02267cd0:
    iVar8 = 0;
  }
  else {
    if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar4 = Dino_BusSand_App_Meta_Profile__get_Level_2273514(0);
    if (iVar8 != iVar4 + -1) goto LAB_02267cd0;
    iVar8 = *(int *)(param_1 + 0x44);
  }
  uVar6 = Dino_BusSand_App_GameApp__get_Home_2169a38(param_1);
  lVar10 = *(long *)puVar1;
  if (*(int *)(lVar10 + 0xe4) == 0) {
    thunk_FUN_0218fdac(lVar10);
  }
  uVar5 = UnityEngine_Object__op_Equality_43c6f30(uVar6,0,0);
  if ((uVar5 & 1) == 0) {
    lVar10 = Dino_BusSand_App_GameApp__get_Home_2169a38(param_1);
    if (lVar10 != 0) {
      Dino_BusSand_App_UI_HomePanel__Refresh_22ea830(lVar10,0);
      if (0 < iVar8) {
        lVar10 = Dino_BusSand_App_GameApp__get_Home_2169a38(param_1);
        if (lVar10 == 0) goto LAB_02267f5c;
        Dino_BusSand_App_UI_HomePanel__Homecoming_22eafc0(lVar10,iVar8,0);
      }
LAB_02267eb0:
      puVar1 = PTR_DAT_04cab1e8;
      *(undefined1 *)(param_1 + 0x39) = 1;
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_App_Audio__PlayMusic_214db34(_UNK_00e20094,*(undefined8 *)PTR_DAT_04cac730);
      lVar10 = *(long *)(param_1 + 0x88);
      if (lVar10 != 0) {
        UnityEngine_MonoBehaviour__StopCoroutine_43c3f10(param_1,lVar10,0);
      }
      uVar6 = Dino_BusSand_App_UI_HomeQueue__Run_23200c4
                        (param_1,*(char *)(param_1 + 0x78) != '\0',0);
      uVar6 = UnityEngine_MonoBehaviour__StartCoroutine_43c3cb4(param_1,uVar6,0);
      *(undefined8 *)(param_1 + 0x88) = uVar6;
      thunk_FUN_02134474((long *)(param_1 + 0x88),uVar6);
      *(undefined1 *)(param_1 + 0x78) = 0;
      return;
    }
  }
  else {
    lVar10 = *(long *)(param_1 + 0x28);
    uVar6 = *(undefined8 *)PTR_DAT_04cac738;
    if (iVar8 < 1) {
      uVar7 = 0;
    }
    else {
      iStack_34 = iVar8;
      uVar7 = FUN_02133100(*(undefined8 *)(PTR_DAT_04ca9ac8 + 0x48),&iStack_34);
    }
    if (lVar10 != 0) {
      Dino_BusSand_App_UI_UIManager__Open_object__2945314
                (lVar10,uVar6,0,uVar7,*(undefined8 *)PTR_DAT_04cac708);
      goto LAB_02267eb0;
    }
  }
LAB_02267f5c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

