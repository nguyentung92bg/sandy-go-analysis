/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier.<HomecomingRoutine>d__116$$MoveNext
bool Dino_BusSand_App_UI_HomeAtelier__HomecomingRoutine_d__116__MoveNext (Dino_BusSand_App_UI_HomeAtelier__HomecomingRoutine_d__116_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.App.UI.HomeAtelier.<HomecomingRoutine>d__116$$MoveNext
   bool Dino_BusSand_App_UI_HomeAtelier__HomecomingRoutine_d__116__MoveNext
   (Dino_BusSand_App_UI_HomeAtelier__HomecomingRoutine_d__116_o* __this, const MethodInfo* method);
    */

undefined4 Dino_BusSand_App_UI_HomeAtelier__HomecomingRoutine_d__116__MoveNext_22dbe80(long param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  float fVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  if ((bRam0000000004f9c3f2 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cb6eb0);
    FUN_02132f7c(PTR_DAT_04cb6eb8);
    FUN_02132f7c(PTR_DAT_04cb6ec0);
    FUN_02132f7c(PTR_DAT_04cb6ec8);
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cab238);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    FUN_02132f7c(PTR_DAT_04cb70d8);
    FUN_02132f7c(PTR_DAT_04cabb00);
    FUN_02132f7c(PTR_DAT_04cad4c0);
    FUN_02132f7c(PTR_DAT_04cb6ed0);
    FUN_02132f7c(PTR_DAT_04cb70e0);
    bRam0000000004f9c3f2 = 1;
  }
  puVar3 = PTR_DAT_04cad568;
  puVar2 = PTR_DAT_04cad4c0;
  uVar6 = _UNK_00e69980;
  iVar10 = *(int *)(param_1 + 0x10);
  lVar7 = *(long *)(param_1 + 0x20);
  uStack_78 = 0;
  uStack_70 = 0;
  lStack_68 = 0;
  if (5 < iVar10) {
    if (iVar10 < 9) {
      if (iVar10 == 6) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b94e == '\0') {
          FUN_02132f7c(PTR_DAT_04cad568);
          cRam0000000004f9b94e = '\x01';
        }
        lVar5 = *(long *)puVar3;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar3;
        }
        if (**(long **)(lVar5 + 0xb8) != 0) {
          Dino_BusSand_GameAudio__Whoosh_2382bbc(_UNK_00e200f8,**(long **)(lVar5 + 0xb8),0);
          lVar5 = *(long *)puVar3;
        }
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b94e == '\0') {
          FUN_02132f7c(PTR_DAT_04cad568);
          cRam0000000004f9b94e = '\x01';
        }
        lVar5 = *(long *)puVar3;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar3;
        }
        if (**(long **)(lVar5 + 0xb8) != 0) {
          Dino_BusSand_GameAudio__Paper_2385674(0x3f000000,0x3f800000,**(long **)(lVar5 + 0xb8),0);
        }
        if (lVar7 == 0) goto LAB_023dcbe0;
        uVar6 = *(undefined8 *)(lVar7 + 0x100);
        if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
        if ((uVar4 & 1) != 0) {
          if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          if (cRam0000000004f9b94e == '\0') {
            FUN_02132f7c(PTR_DAT_04cad568);
            cRam0000000004f9b94e = '\x01';
          }
          lVar5 = *(long *)puVar3;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
            lVar5 = *(long *)puVar3;
          }
          if (**(long **)(lVar5 + 0xb8) != 0) {
            Dino_BusSand_GameAudio__Vroom_2385770(0x3f800000,**(long **)(lVar5 + 0xb8),0);
          }
        }
        cVar1 = *(char *)(lVar7 + 0x9d);
        *(float *)(param_1 + 0x38) = (float)*(int *)(param_1 + 0x28);
        iVar10 = *(int *)(lVar7 + 0x58);
        *(undefined4 *)(param_1 + 0x40) = 0;
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(float *)(param_1 + 0x3c) = (float)iVar10;
        if (cVar1 == '\0') {
          fVar9 = 0.0;
LAB_023dc2f0:
          fVar9 = fVar9 * fVar9 * fVar9 * 4.0;
LAB_023dc300:
          fVar11 = *(float *)(param_1 + 0x38);
          fVar18 = *(float *)(param_1 + 0x3c);
          fVar16 = *(float *)(lVar7 + 0x5c);
          fVar12 = 1.0;
          if (fVar9 <= 1.0) {
            fVar12 = fVar9;
          }
          fVar13 = 0.0;
          if (0.0 <= fVar9) {
            fVar13 = fVar12;
          }
          if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          fVar12 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
          fVar9 = _UNK_00e20a7c;
          if (_UNK_00e20a7c <= fVar12) {
            fVar9 = fVar12;
          }
          if ((*(long *)(lVar7 + 0x78) == 0) ||
             (lVar5 = System_Collections_Generic_Dictionary_int__object___get_Values_3437130
                                (*(long *)(lVar7 + 0x78),*(undefined8 *)PTR_DAT_04cb6eb0),
             lVar5 == 0)) goto LAB_023dcbe0;
          fVar11 = fVar11 + (fVar18 - fVar11) * fVar13;
          fVar9 = (fVar11 - fVar16) / fVar9;
          System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator_30a9274
                    (&uStack_78,lVar5,*(undefined8 *)PTR_DAT_04cb6ed0);
          puVar2 = PTR_DAT_04cb6ec0;
          while (uVar4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext_3632698
                                   (&uStack_78,*(undefined8 *)puVar2), (uVar4 & 1) != 0) {
            if (lStack_68 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_02133224();
            }
            fVar12 = fVar9 - *(float *)(param_1 + 0x40);
            *(float *)(lStack_68 + 0x7c) = *(float *)(lStack_68 + 0x7c) + fVar12 * 7.0;
            *(float *)(lStack_68 + 0x74) = *(float *)(lStack_68 + 0x74) + fVar12 * 0.25;
          }
          System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose_3632694
                    (&uStack_78,*(undefined8 *)PTR_DAT_04cb6eb8);
          *(undefined8 *)(param_1 + 0x18) = 0;
          *(float *)(param_1 + 0x40) = fVar9;
          *(float *)(lVar7 + 0x5c) = fVar11;
          thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
          uVar15 = 7;
          goto LAB_023dcbb4;
        }
      }
      else {
        if (iVar10 != 7) {
          if (iVar10 != 8) {
            return 0;
          }
          *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
          if (lVar7 == 0) goto LAB_023dcbe0;
          lVar5 = Dino_BusSand_App_UI_HomeAtelier__Find_22d75bc(lVar7,*(undefined4 *)(lVar7 + 0x58))
          ;
          plVar8 = (long *)(param_1 + 0x48);
          *plVar8 = lVar5;
          thunk_FUN_02134474(plVar8,lVar5);
          lVar5 = *plVar8;
          if ((lVar5 != 0) && (*(long *)(lVar5 + 0x50) != 0)) {
            Dino_BusSand_App_UI_HomeAtelier__ShowPencil_22da20c(lVar7,lVar5,1);
            uVar6 = Dino_BusSand_App_UI_HomeAtelier__Hold_22d98f8(_UNK_00e2065c,lVar7);
            *(undefined8 *)(param_1 + 0x18) = uVar6;
            thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
            *(undefined4 *)(param_1 + 0x10) = 9;
            return 1;
          }
          goto LAB_023dcb28;
        }
        fVar9 = *(float *)(param_1 + 0x70);
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar12 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
        fVar9 = fVar9 + fVar12 / _UNK_00e205e8;
        *(float *)(param_1 + 0x70) = fVar9;
        if (1.0 <= fVar9) {
          if (lVar7 == 0) goto LAB_023dcbe0;
        }
        else {
          if (lVar7 == 0) goto LAB_023dcbe0;
          if (*(char *)(lVar7 + 0x9d) == '\0') {
            if (fVar9 < 0.5) goto LAB_023dc2f0;
            fVar9 = (float)func_0x049b5300(2.0 - (fVar9 + fVar9),0x40400000);
            fVar9 = fVar9 * -0.5 + 1.0;
            goto LAB_023dc300;
          }
        }
      }
      *(undefined4 *)(lVar7 + 0x5c) = *(undefined4 *)(param_1 + 0x3c);
      puVar2 = PTR_DAT_04cad568;
      if (*(long *)(lVar7 + 0x38) == 0) goto LAB_023dcbe0;
      *(undefined4 *)(*(long *)(lVar7 + 0x38) + 0xec) = 0x40c00000;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      if (cRam0000000004f9b94e == '\0') {
        FUN_02132f7c(PTR_DAT_04cad568);
        cRam0000000004f9b94e = '\x01';
      }
      lVar5 = *(long *)puVar2;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar2;
      }
      if (**(long **)(lVar5 + 0xb8) != 0) {
        Dino_BusSand_GameAudio__Peg_23855f8(0x3f800000,**(long **)(lVar5 + 0xb8),0);
      }
      if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      Dino_BusSand_Haptics__Play_2388ed8(0,0);
      uVar6 = Dino_BusSand_App_UI_HomeAtelier__Hold_22d98f8(_UNK_00e201f4,lVar7);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
      uVar15 = 8;
      goto LAB_023dcbb4;
    }
    if (iVar10 == 9) {
      fVar9 = 0.0;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x70) = uVar6;
LAB_023dc854:
      if (lVar7 == 0) goto LAB_023dcbe0;
      if (*(char *)(lVar7 + 0x9d) == '\0') {
        if (_UNK_00e201f4 <= fVar9) {
          fVar12 = _UNK_00e20210;
          if (_UNK_00e1fecc < fVar9) {
            fVar9 = ((1.0 - fVar9) * (1.0 - fVar9)) / _UNK_00e209c8;
            fVar12 = 1.0;
          }
          fVar9 = fVar9 + fVar12;
        }
        else {
          fVar9 = (fVar9 * fVar9) / _UNK_00e207dc;
        }
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(float *)(lVar7 + 0x94) = fVar9;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        uVar15 = 10;
        goto LAB_023dcbb4;
      }
LAB_023dca5c:
      fVar9 = 0.0;
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(undefined4 *)(lVar7 + 0x94) = 0x3f800000;
      *(undefined1 *)(lVar7 + 0x9c) = 1;
LAB_023dca74:
      if (*(char *)(lVar7 + 0x9d) == '\0') {
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(float *)(lVar7 + 0x98) = fVar9;
        thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
        uVar15 = 0xb;
        goto LAB_023dcbb4;
      }
    }
    else {
      if (iVar10 == 10) {
        fVar9 = *(float *)(param_1 + 0x74);
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar12 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
        fVar9 = fVar9 + fVar12 / *(float *)(param_1 + 0x70);
        *(float *)(param_1 + 0x74) = fVar9;
        if (fVar9 < 1.0) goto LAB_023dc854;
        if (lVar7 == 0) goto LAB_023dcbe0;
        goto LAB_023dca5c;
      }
      if (iVar10 != 0xb) {
        return 0;
      }
      fVar9 = *(float *)(param_1 + 0x74);
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar12 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
      fVar9 = fVar9 + fVar12 / _UNK_00e203f4;
      *(float *)(param_1 + 0x74) = fVar9;
      if (fVar9 < 1.0) {
        if (lVar7 == 0) goto LAB_023dcbe0;
        goto LAB_023dca74;
      }
      if (lVar7 == 0) goto LAB_023dcbe0;
    }
    uVar6 = *(undefined8 *)(param_1 + 0x48);
    *(undefined4 *)(lVar7 + 0x98) = 0x3f800000;
    *(undefined1 *)(lVar7 + 0x9c) = 0;
    Dino_BusSand_App_UI_HomeAtelier__ShowPencil_22da20c(lVar7,uVar6,0);
    puVar2 = PTR_DAT_04cad568;
    if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    if (cRam0000000004f9b94e == '\0') {
      FUN_02132f7c(PTR_DAT_04cad568);
      cRam0000000004f9b94e = '\x01';
    }
    lVar5 = *(long *)puVar2;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar5 = *(long *)puVar2;
    }
    if (**(long **)(lVar5 + 0xb8) != 0) {
      Dino_BusSand_GameAudio__UiTick_2383128(_UNK_00e20094,**(long **)(lVar5 + 0xb8),0);
    }
    lVar5 = *(long *)(lVar7 + 0x50);
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
    }
    if (*(long *)(lVar7 + 0x100) != 0) {
      Dino_BusSand_App_UI_HomeStage__Ready_22ef968(*(long *)(lVar7 + 0x100),0);
    }
LAB_023dcb28:
    uVar6 = NEON_fmov(0x3f800000,4);
    *(undefined2 *)(lVar7 + 0x9c) = 0;
    *(undefined1 *)(lVar7 + 0xf8) = 0;
    *(undefined8 *)(lVar7 + 0x94) = uVar6;
    *(undefined8 *)(lVar7 + 0x88) = 0xffffffffffffffff;
    return 0;
  }
  if (2 < iVar10) {
    if (iVar10 == 3) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x68) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
LAB_023dc798:
      if (lVar7 == 0) goto LAB_023dcbe0;
    }
    else {
      if (iVar10 == 4) {
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        if (cRam0000000004f9b94e == '\0') {
          FUN_02132f7c(PTR_DAT_04cad568);
          cRam0000000004f9b94e = '\x01';
        }
        lVar5 = *(long *)puVar3;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar3;
        }
        if (**(long **)(lVar5 + 0xb8) != 0) {
          Dino_BusSand_GameAudio__PaintBloom_238459c(0,**(long **)(lVar5 + 0xb8),3,0);
        }
        if (*(int *)(*(long *)PTR_DAT_04cab238 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        Dino_BusSand_Haptics__Play_2388ed8(1,0);
        if (*(long *)(param_1 + 0x30) != 0) {
          uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x48);
          if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
          if ((uVar4 & 1) != 0) {
            if ((*(long *)(param_1 + 0x30) == 0) ||
               (lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 0x48), lVar5 == 0)) goto LAB_023dcbe0;
            UnityEngine_Material__SetVector_4383100
                      (0x3f000000,_UNK_00e2094c,0,0,lVar5,*(undefined8 *)PTR_DAT_04cb70e0,0);
          }
        }
        fVar9 = 0.0;
        *(undefined1 *)(param_1 + 0x78) = 0;
        *(undefined4 *)(param_1 + 0x70) = 0;
LAB_023dc784:
        if (lVar7 == 0) goto LAB_023dcbe0;
        if (*(char *)(lVar7 + 0x9d) == '\0') {
          fVar11 = (float)func_0x049b5300(1.0 - fVar9,_UNK_00e2032c);
          fVar12 = _UNK_00e1fe38;
          *(float *)(lVar7 + 0x90) = 1.0 - fVar11;
          if (((fVar12 < fVar9) && (*(char *)(param_1 + 0x78) == '\0')) &&
             (*(long *)(param_1 + 0x30) != 0)) {
            *(undefined1 *)(param_1 + 0x78) = 1;
            Dino_BusSand_App_UI_HomeAtelier__Glow_22d999c(lVar7);
          }
          *(undefined8 *)(param_1 + 0x18) = 0;
          thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
          uVar15 = 5;
          goto LAB_023dcbb4;
        }
      }
      else {
        if (iVar10 != 5) {
          return 0;
        }
        fVar9 = *(float *)(param_1 + 0x70);
        *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
        if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
        }
        fVar12 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
        fVar9 = fVar9 + fVar12;
        *(float *)(param_1 + 0x70) = fVar9;
        if (fVar9 < 1.0) goto LAB_023dc784;
      }
      if ((*(char *)(param_1 + 0x78) != '\0') || (*(long *)(param_1 + 0x30) == 0))
      goto LAB_023dc798;
      if (lVar7 == 0) goto LAB_023dcbe0;
      Dino_BusSand_App_UI_HomeAtelier__Glow_22d999c(lVar7);
    }
    puVar2 = PTR_DAT_04ca9ae8;
    uVar6 = *(undefined8 *)(lVar7 + 0x100);
    *(undefined4 *)(lVar7 + 0x90) = 0x3f800000;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    uVar15 = _UNK_00e208d0;
    if ((uVar4 & 1) == 0) {
      uVar15 = _UNK_00e20590;
    }
    uVar6 = Dino_BusSand_App_UI_HomeAtelier__Hold_22d98f8(uVar15,lVar7);
    *(undefined8 *)(param_1 + 0x18) = uVar6;
    thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
    uVar15 = 6;
    goto LAB_023dcbb4;
  }
  if (iVar10 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (lVar7 == 0) goto LAB_023dcbe0;
    iVar10 = *(int *)(param_1 + 0x28);
    *(undefined1 *)(lVar7 + 0x9d) = 0;
    *(undefined1 *)(lVar7 + 0xf8) = 1;
    *(int *)(lVar7 + 0x88) = iVar10;
    *(undefined4 *)(lVar7 + 0x8c) = *(undefined4 *)(lVar7 + 0x58);
    *(undefined8 *)(lVar7 + 0x90) = 0;
    *(undefined4 *)(lVar7 + 0x98) = 0;
    *(undefined4 *)(lVar7 + 0xb0) = 0;
    *(float *)(lVar7 + 0x5c) = (float)iVar10;
    if (*(long *)(lVar7 + 0x100) != 0) {
      Dino_BusSand_App_UI_HomeStage__Offstage_22ef8a8(*(long *)(lVar7 + 0x100),0);
    }
    *(undefined4 *)(param_1 + 0x2c) = 0;
LAB_023dc42c:
    if (*(int *)(*(long *)PTR_DAT_04cabb00 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = Dino_BusSand_App_UI_ScreenFade__get_Busy_2289848(0);
    if (((uVar4 & 1) != 0) && (fVar9 = *(float *)(param_1 + 0x2c), fVar9 < 2.0)) {
      if (*(int *)(*(long *)PTR_DAT_04cad4c0 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      fVar12 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(float *)(param_1 + 0x2c) = fVar9 + fVar12;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    if (lVar7 == 0) goto LAB_023dcbe0;
    Dino_BusSand_App_UI_HomeAtelier__Sync_22d669c(lVar7);
    lVar5 = Dino_BusSand_App_UI_HomeAtelier__Find_22d75bc(lVar7,*(undefined4 *)(param_1 + 0x28));
    plVar8 = (long *)(param_1 + 0x30);
    *plVar8 = lVar5;
    thunk_FUN_02134474(plVar8,lVar5);
    uVar6 = *(undefined8 *)(lVar7 + 0x100);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar4 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    puVar2 = PTR_DAT_04cb70d8;
    if ((((uVar4 & 1) == 0) || (*plVar8 == 0)) || (lVar5 = *(long *)(*plVar8 + 0x50), lVar5 == 0)) {
      uVar6 = Dino_BusSand_App_UI_HomeAtelier__Hold_22d98f8(0x3e800000,lVar7);
      *(undefined8 *)(param_1 + 0x18) = uVar6;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
      uVar15 = 4;
      goto LAB_023dcbb4;
    }
    uVar14 = *(undefined4 *)(lVar5 + 0x40);
    uVar15 = *(undefined4 *)(lVar5 + 0x44);
    uVar17 = *(undefined4 *)(lVar5 + 0x48);
    uVar19 = *(undefined4 *)(lVar5 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = uVar14;
    *(undefined4 *)(param_1 + 0x54) = uVar15;
    lVar5 = *(long *)puVar2;
    *(undefined4 *)(param_1 + 0x58) = uVar17;
    *(undefined4 *)(param_1 + 0x5c) = uVar19;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    uVar14 = Dino_BusSand_View_PackPalette__ShadeOf_23902e4(uVar14,0);
    *(undefined4 *)(param_1 + 0x60) = uVar14;
    *(undefined4 *)(param_1 + 100) = uVar15;
    *(undefined4 *)(param_1 + 0x68) = uVar17;
    *(undefined4 *)(param_1 + 0x6c) = uVar19;
    if (*(long *)(lVar7 + 0x100) == 0) goto LAB_023dcbe0;
    fVar9 = (float)Dino_BusSand_App_UI_HomeStage__ComeHome_22ef820
                             (*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                              *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),uVar14
                              ,uVar15,uVar17,uVar19,*(long *)(lVar7 + 0x100),0);
    fVar12 = 0.0;
    *(float *)(param_1 + 0x70) = fVar9;
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  else {
    if (iVar10 == 1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      goto LAB_023dc42c;
    }
    if (iVar10 != 2) {
      return 0;
    }
    fVar12 = *(float *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    fVar9 = (float)Dino_BusSand_App_UI_UiMotion__get_Dt_228a520(0);
    fVar12 = fVar12 + fVar9;
    fVar9 = *(float *)(param_1 + 0x70);
    *(float *)(param_1 + 0x74) = fVar12;
  }
  if (fVar9 + _UNK_00e205f8 <= fVar12) {
    if (lVar7 == 0) goto LAB_023dcbe0;
    if (*(char *)(lVar7 + 0x9d) != '\0') goto LAB_023dc890;
  }
  else {
    if (lVar7 == 0) goto LAB_023dcbe0;
    if (*(char *)(lVar7 + 0x9d) == '\0') {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),0);
      uVar15 = 2;
      goto LAB_023dcbb4;
    }
LAB_023dc890:
    if (*(long *)(lVar7 + 0x100) == 0) {
LAB_023dcbe0:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    Dino_BusSand_App_UI_HomeStage__Settle_22ef8d0(*(long *)(lVar7 + 0x100),0);
  }
  uVar6 = Dino_BusSand_App_UI_HomeAtelier__Pour_22d91e0
                    (*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),
                     *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),
                     *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
                     *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),lVar7,
                     *(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  thunk_FUN_02134474((undefined8 *)(param_1 + 0x18),uVar6);
  uVar15 = 3;
LAB_023dcbb4:
  *(undefined4 *)(param_1 + 0x10) = uVar15;
  return 1;
}

