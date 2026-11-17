/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$Literal
void Dino_BusSand_App_Meta_Journey_UiJourney__Literal (Dino_BusSand_App_Meta_Journey_UiJourney_o* __this, System_String_o* a, System_String_o* b, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Meta.Journey.UiJourney$$Literal
   void Dino_BusSand_App_Meta_Journey_UiJourney__Literal (Dino_BusSand_App_Meta_Journey_UiJourney_o*
   __this, System_String_o* a, System_String_o* b, const MethodInfo* method); */

void Dino_BusSand_App_Meta_Journey_UiJourney__Literal_229aa90
               (long param_1,long param_2,long param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  if ((bRam0000000004f9c219 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa200);
    bRam0000000004f9c219 = 1;
  }
  puVar2 = PTR_DAT_04caa200;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
    }
    iVar5 = System_Math__Min_4831118(uVar1,0x30,0);
    if (param_3 == 0) {
      uVar6 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_3 + 0x10);
      if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
      }
      uVar6 = System_Math__Min_4831118(uVar1,0x2f - iVar5,0);
      uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      iVar4 = 0;
      if (param_3 != 0 && uVar6 != 0) {
        iVar4 = uVar6 + 1;
      }
      Dino_BusSand_App_Meta_Journey_JourneyBytes__VarU_2295664
                (*(long *)(param_1 + 0x10),(long)(iVar4 + iVar5));
      if (*(long *)(param_1 + 0x10) != 0) {
        Dino_BusSand_App_Meta_Journey_JourneyBytes__Ascii_229585c
                  (*(long *)(param_1 + 0x10),param_2,0,iVar5);
        if (param_3 == 0 || uVar6 == 0) {
          return;
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          Dino_BusSand_App_Meta_Journey_JourneyBytes__U8_229560c(*(long *)(param_1 + 0x10),0x2f);
          lVar8 = *(long *)(param_1 + 0x10);
          if (lVar8 != 0) {
            iVar5 = 0;
            if ((bRam0000000004f9c1fe & 1) == 0) {
              FUN_02132f7c(PTR_DAT_04caa200);
              bRam0000000004f9c1fe = 1;
            }
            if (param_3 != 0) {
              uVar1 = *(undefined4 *)(param_3 + 0x10);
              if (*(int *)(*(long *)PTR_DAT_04caa200 + 0xe4) == 0) {
                thunk_FUN_0218fdac();
              }
              iVar4 = System_Math__Min_4831118(uVar6,uVar1,0);
              if ((0 < iVar4) &&
                 (uVar7 = Dino_BusSand_App_Meta_Journey_JourneyBytes__Room_22954ac(lVar8,iVar4),
                 (uVar7 & 1) != 0)) {
                do {
                  sVar3 = System_String__get_Chars_46ccb24(param_3,iVar5,0);
                  uVar6 = *(uint *)(lVar8 + 0x18);
                  lVar9 = *(long *)(lVar8 + 0x10);
                  if (0x5e < (ushort)(sVar3 - 0x20U)) {
                    sVar3 = 0x3f;
                  }
                  *(uint *)(lVar8 + 0x18) = uVar6 + 1;
                  if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_02133224();
                  }
                  if (*(uint *)(lVar9 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
                    FUN_0213322c();
                  }
                  iVar4 = iVar4 + -1;
                  iVar5 = iVar5 + 1;
                  *(char *)(lVar9 + (int)uVar6 + 0x20) = (char)sVar3;
                } while (iVar4 != 0);
              }
            }
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

