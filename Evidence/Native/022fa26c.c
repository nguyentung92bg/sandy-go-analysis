/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide.<RunMechanic>d__6$$MoveNext
bool Dino_BusSand_App_UI_MechanicGuide__RunMechanic_d__6__MoveNext (Dino_BusSand_App_UI_MechanicGuide__RunMechanic_d__6_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x022fa6fc) */
/* IL2CPP: Dino.BusSand.App.UI.MechanicGuide.<RunMechanic>d__6$$MoveNext
   bool Dino_BusSand_App_UI_MechanicGuide__RunMechanic_d__6__MoveNext
   (Dino_BusSand_App_UI_MechanicGuide__RunMechanic_d__6_o* __this, const MethodInfo* method); */

undefined8 Dino_BusSand_App_UI_MechanicGuide__RunMechanic_d__6__MoveNext_21fa26c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uStack_80;
  int iStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  
  if ((bRam0000000004f9bc62 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb1930);
    FUN_02132f7c(PTR_DAT_04caba50);
    FUN_02132f7c(PTR_DAT_04cad6f0);
    FUN_02132f7c(PTR_DAT_04cad728);
    FUN_02132f7c(PTR_DAT_04cb18c8);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cabaf8);
    FUN_02132f7c(PTR_DAT_04cb1938);
    FUN_02132f7c(PTR_DAT_04cb1870);
    FUN_02132f7c(PTR_DAT_04cb1940);
    FUN_02132f7c(PTR_DAT_04cb18d8);
    FUN_02132f7c(PTR_DAT_04cb18e0);
    FUN_02132f7c(PTR_DAT_04cb1948);
    FUN_02132f7c(PTR_DAT_04cb18e8);
    FUN_02132f7c(PTR_DAT_04cb1950);
    FUN_02132f7c(PTR_DAT_04cb1958);
    FUN_02132f7c(PTR_DAT_04cb1960);
    bRam0000000004f9bc62 = 1;
  }
  puVar2 = PTR_DAT_04caba50;
  iVar7 = *(int *)(param_1 + 0x10);
  uStack_58 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_70 = 0;
  iStack_74 = 0;
  uStack_80 = 0;
  if (iVar7 == 2) {
                    /* catch() { ... } // from try @ 022fa734 with catch @ 022fa6d4 */
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
LAB_022fa6dc:
    *(undefined8 *)(param_1 + 0x60) = 0;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x60),0);
    Dino_BusSand_App_UI_MechanicGuide__RunMechanic_d__6____m__Finally1_21fac30(param_1);
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      lVar8 = *(long *)puVar2;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar2;
      }
      puVar2 = PTR_DAT_04cb18c8;
      if (*(char *)(*(long *)(lVar8 + 0xb8) + 8) != '\0') {
        lVar8 = *(long *)PTR_DAT_04cb18c8;
        if (*(int *)(lVar8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar8 = *(long *)puVar2;
        }
        if (**(char **)(lVar8 + 0xb8) == '\0') {
          return 0;
        }
      }
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      lVar8 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248
                        (*(long *)(param_1 + 0x20),0);
      if (lVar8 == 0) {
        if (param_1 == 0) goto LAB_022faa9c;
        uVar11 = 0;
      }
      else {
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar8 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248
                          (*(long *)(param_1 + 0x20),0);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 022faaa4 to 023faab7 has its CatchHandler @ 022faaf0 */
          FUN_02133224();
        }
        uVar11 = *(undefined8 *)(lVar8 + 0x10);
      }
      *(undefined8 *)(param_1 + 0x40) = uVar11;
                    /* try { // try from 022fa734 to 023fa783 has its CatchHandler @ 022fa6d4 */
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x40));
      puVar2 = PTR_DAT_04cb18c8;
      uVar11 = *(undefined8 *)(param_1 + 0x40);
      if (*(int *)(*(long *)PTR_DAT_04cb18c8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar11 = Dino_BusSand_App_UI_MechanicGuide__Pending_21f91c4(uVar11);
                    /* catch() { ... } // from try @ 022fa720 with catch @ 022fa76c */
      *(undefined8 *)(param_1 + 0x48) = uVar11;
      thunk_FUN_02134474();
      puVar1 = PTR_DAT_04ca9ae8;
      if (*(long *)(param_1 + 0x48) == 0) {
        return 0;
      }
      if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02133224();
      }
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
      if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
      if ((uVar9 & 1) == 0) {
        if (param_1 == 0) {
LAB_022faa9c:
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar11 = 0;
      }
      else {
        if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        lVar8 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar11 = *(undefined8 *)(lVar8 + 200);
      }
      *(undefined8 *)(param_1 + 0x50) = uVar11;
      thunk_FUN_02134474();
      uVar11 = *(undefined8 *)(param_1 + 0x50);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
                    /* catch() { ... } // from try @ 022fa860 with catch @ 022fa800 */
      uVar9 = UnityEngine_Object__op_Equality_43c6f30(uVar11,0,0);
      if ((uVar9 & 1) == 0) {
        if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        uVar9 = Dino_BusSand_View_MechanicLayer__TryGetAnchor_23d09b0
                          (*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48),0,&uStack_60,
                           (long)&uStack_68 + 4,0);
        if ((uVar9 & 1) != 0) {
          lVar8 = *(long *)puVar2;
          if (*(int *)(lVar8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
                    /* try { // try from 022fa84c to 023fa85f has its CatchHandler @ 022fa898 */
            lVar8 = *(long *)puVar2;
          }
                    /* try { // try from 022fa860 to 023fa8af has its CatchHandler @ 022fa800 */
          iVar7 = System_Array__IndexOf_object__2906334
                            (*(undefined8 *)(*(long *)(lVar8 + 0xb8) + 8),
                             *(undefined8 *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_04cb1930);
          *(int *)(param_1 + 0x58) = iVar7 + 100;
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
                    /* catch() { ... } // from try @ 022fa84c with catch @ 022fa898 */
          Dino_BusSand_App_Gameplay_GameplayController__SetPaused_229dda8
                    (*(long *)(param_1 + 0x20),1,*(undefined8 *)PTR_DAT_04cb1960,0);
          uVar5 = uStack_58;
          uVar3 = (undefined4)uStack_60;
          uVar4 = uStack_60._4_4_;
          uVar12 = *(undefined4 *)(param_1 + 0x58);
          uVar11 = *(undefined8 *)PTR_DAT_04cb1948;
          *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
          uVar11 = System_String__Concat_46c82e0(uVar11,*(undefined8 *)(param_1 + 0x48),0);
          lVar8 = Dino_BusSand_App_UI_MechanicGuide__WorldGuide_21f9ba8
                            (uVar3,uVar4,uVar5,uVar12,uVar11,0,*(undefined8 *)(param_1 + 0x20));
          uVar11 = thunk_FUN_0216e89c(*(undefined8 *)PTR_DAT_04cad728);
          System_Collections_Generic_List_object____ctor_3a8138c
                    (uVar11,*(undefined8 *)PTR_DAT_04cad6f0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          puVar14 = (undefined8 *)(lVar8 + 0x78);
          *puVar14 = uVar11;
                    /* catch() { ... } // from try @ 022fa98c with catch @ 022fa92c */
          thunk_FUN_02134474(puVar14,uVar11);
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          Dino_BusSand_View_GameView__CollectHighlights_23a8abc
                    (lVar10,*(undefined8 *)(param_1 + 0x48),*puVar14,0);
          uVar9 = System_String__op_Equality_46d1108
                            (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_04cb18e0,0);
          if ((uVar9 & 1) != 0) {
                    /* try { // try from 022fa978 to 023fa98b has its CatchHandler @ 022fa9c4 */
            uVar11 = *(undefined8 *)(param_1 + 0x28);
            if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
                    /* try { // try from 022fa98c to 023fa9db has its CatchHandler @ 022fa92c */
              thunk_FUN_0218fdac();
            }
            uVar9 = UnityEngine_Object__op_Inequality_43c8dec(uVar11,0,0);
            if ((uVar9 & 1) != 0) {
              if (*(long *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar11 = Dino_BusSand_App_UI_HudPanel__get_RescueRect_230b7b4
                                 (*(long *)(param_1 + 0x28),0);
              *(undefined8 *)(lVar8 + 0x30) = uVar11;
                    /* catch() { ... } // from try @ 022fa978 with catch @ 022fa9c4 */
              thunk_FUN_02134474();
            }
          }
          if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
          if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar11 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                             (lVar10,*(undefined8 *)PTR_DAT_04cb1940,5,lVar8,
                              *(undefined8 *)PTR_DAT_04cb1938);
          *(undefined8 *)(param_1 + 0x60) = uVar11;
          thunk_FUN_02134474();
          uVar11 = *(undefined8 *)(param_1 + 0x60);
          uVar13 = *(undefined8 *)(param_1 + 0x38);
          if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar11 = Dino_BusSand_App_UI_MechanicGuide__WaitClosed_21f9db8(uVar11,uVar13);
          *(undefined8 *)(param_1 + 0x18) = uVar11;
          thunk_FUN_02134474();
          uVar12 = 1;
LAB_022faa4c:
          *(undefined4 *)(param_1 + 0x10) = uVar12;
          return 1;
                    /* catch() { ... } // from try @ 022faab8 with catch @ 022faa58 */
        }
      }
      Dino_BusSand_App_Gameplay_MechanicIntro__Check_22a16a8(*(undefined8 *)(param_1 + 0x40),0);
      return 0;
    }
    lVar8 = *(long *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffd;
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar9 = (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28))
    ;
    if ((uVar9 & 1) != 0) {
      if ((*(long *)(param_1 + 0x60) == 0) || (*(char *)(*(long *)(param_1 + 0x60) + 0x40) == '\0'))
      {
        Dino_BusSand_App_Gameplay_MechanicIntro__Check_22a16a8(*(undefined8 *)(param_1 + 0x40),0);
      }
      else {
        uVar11 = System_String__Concat_46c82e0
                           (*(undefined8 *)PTR_DAT_04cb1870,*(undefined8 *)(param_1 + 0x48),0);
        if (*(int *)(*(long *)PTR_DAT_04cabaf8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_App_Meta_Profile__SetFlag_227375c(uVar11,1,0);
        puVar2 = PTR_DAT_04cb18e8;
        uVar9 = System_String__op_Equality_46d1108
                          (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_04cb18e8,0);
        if (((uVar9 & 1) == 0) &&
           (uVar9 = System_String__op_Equality_46d1108
                              (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)PTR_DAT_04cb18d8,0),
           (uVar9 & 1) == 0)) goto LAB_022fa6dc;
        if (*(long *)(param_1 + 0x50) == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 022faab8 to 023fab07 has its CatchHandler @ 022faa58 */
          FUN_02133224();
        }
        bVar6 = Dino_BusSand_View_MechanicLayer__TryGetAnchor_23d09b0
                          (*(long *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48),1,&uStack_70,
                           &iStack_74,0);
        if ((bVar6 & -1 < iStack_74) != 0) {
          if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          lVar8 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248
                            (*(long *)(param_1 + 0x20),0);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          if (*(long *)(lVar8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_02133224();
          }
          uVar9 = Dino_BusSand_Core_TruckGrid__TryGet_241d34c
                            (*(long *)(lVar8 + 0x28),iStack_74,&uStack_80,0);
          if ((uVar9 & 1) != 0) {
            if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            lVar8 = Dino_BusSand_App_Gameplay_GameplayController__get_Engine_229b248
                              (*(long *)(param_1 + 0x20),0);
            if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            if (*(long *)(lVar8 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            uVar9 = Dino_BusSand_Core_TruckGrid__CanTap_241c41c(*(long *)(lVar8 + 0x28),uStack_80,0)
            ;
            if ((uVar9 & 1) != 0) {
              uVar3 = (undefined4)uStack_70;
              uVar4 = uStack_70._4_4_;
              uVar5 = (undefined4)uStack_68;
              uVar12 = *(undefined4 *)(param_1 + 0x58);
              uVar9 = System_String__op_Equality_46d1108
                                (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)puVar2,0);
              puVar14 = (undefined8 *)PTR_DAT_04cb1950;
              if ((uVar9 & 1) == 0) {
                puVar14 = (undefined8 *)PTR_DAT_04cb1958;
              }
              uVar13 = *puVar14;
              uVar11 = *(undefined8 *)(param_1 + 0x20);
              if (*(int *)(*(long *)PTR_DAT_04cb18c8 + 0xe4) == 0) {
                thunk_FUN_0218fdac(*(long *)PTR_DAT_04cb18c8);
              }
              lVar8 = Dino_BusSand_App_UI_MechanicGuide__WorldGuide_21f9ba8
                                (uVar3,uVar4,uVar5,uVar12,uVar13,1,uVar11);
              if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 022faaa4 with catch @ 022faaf0 */
                FUN_02133224();
              }
              uVar11 = *(undefined8 *)PTR_DAT_04cad728;
              *(int *)(lVar8 + 0x70) = iStack_74;
              uVar11 = thunk_FUN_0216e89c(uVar11);
              System_Collections_Generic_List_object____ctor_3a8138c
                        (uVar11,*(undefined8 *)PTR_DAT_04cad6f0);
              puVar14 = (undefined8 *)(lVar8 + 0x78);
              *puVar14 = uVar11;
              thunk_FUN_02134474(puVar14,uVar11);
              if (*(long *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              Dino_BusSand_View_GameView__CollectHighlights_23a8abc
                        (lVar10,*(undefined8 *)(param_1 + 0x48),*puVar14,0);
              if (*(long *)(param_1 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              lVar10 = *(long *)(*(long *)(param_1 + 0x30) + 0x28);
              if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_02133224();
              }
              uVar11 = Dino_BusSand_App_UI_UIManager__Open_object__2945314
                                 (lVar10,*(undefined8 *)PTR_DAT_04cb1940,5,lVar8,
                                  *(undefined8 *)PTR_DAT_04cb1938);
              uVar11 = Dino_BusSand_App_UI_MechanicGuide__WaitClosed_21f9db8
                                 (uVar11,*(undefined8 *)(param_1 + 0x38));
              *(undefined8 *)(param_1 + 0x18) = uVar11;
              thunk_FUN_02134474();
              uVar12 = 2;
              goto LAB_022faa4c;
            }
          }
        }
      }
    }
                    /* try { // try from 022fa720 to 023fa733 has its CatchHandler @ 022fa76c */
    Dino_BusSand_App_UI_MechanicGuide__RunMechanic_d__6____m__Finally1_21fac30(param_1);
  }
  return 0;
}

