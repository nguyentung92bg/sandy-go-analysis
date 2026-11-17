/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$get_LogPath
System_String_o* Dino_BusSand_Cheat_QaJourney__get_LogPath (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Cheat.QaJourney$$get_LogPath
   System_String_o* Dino_BusSand_Cheat_QaJourney__get_LogPath (const MethodInfo* method); */

long Dino_BusSand_Cheat_QaJourney__get_LogPath_236f844(void)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar7 = PTR_DAT_04caa210;
  if ((bRam0000000004f9c7c6 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04caa228);
    FUN_02132f7c(PTR_DAT_04cbafd0);
    bRam0000000004f9c7c6 = 1;
  }
  puVar1 = PTR_DAT_04caa228;
  if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  puVar7 = PTR_DAT_04cbafd0;
  lVar4 = UnityEngine_Application__get_persistentDataPath_43521d4(0);
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_0218fdac(*(long *)puVar1);
  }
  lVar10 = *(long *)puVar7;
  if ((bRam0000000004fad533 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa228,lVar10,0);
    bRam0000000004fad533 = 1;
  }
  puVar7 = PTR_DAT_04caa228;
  if (lVar4 == 0) {
    thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
    uVar8 = thunk_FUN_0216e89c();
    puVar7 = PTR_DAT_04d12be8;
  }
  else {
    if (lVar10 != 0) {
      lVar5 = lVar10;
      if ((*(int *)(lVar4 + 0x10) == 0) || (lVar5 = lVar4, *(int *)(lVar10 + 0x10) == 0)) {
        return lVar5;
      }
      lVar5 = *(long *)PTR_DAT_04caa228;
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar5 = *(long *)puVar7;
      }
      iVar3 = System_String__IndexOfAny_46d7618(lVar4,**(undefined8 **)(lVar5 + 0xb8),0);
      if (iVar3 == -1) {
        lVar5 = *(long *)puVar7;
        if (*(int *)(lVar5 + 0xe4) == 0) {
          thunk_FUN_0218fdac();
          lVar5 = *(long *)puVar7;
        }
        iVar3 = System_String__IndexOfAny_46d7618(lVar10,**(undefined8 **)(lVar5 + 0xb8),0);
        if (iVar3 == -1) {
          if (*(int *)(*(long *)puVar7 + 0xe4) == 0) {
            thunk_FUN_0218fdac();
          }
          uVar6 = System_IO_Path__IsPathRooted_4807098(lVar10);
          if ((uVar6 & 1) != 0) {
            return lVar10;
          }
          sVar2 = System_String__get_Chars_46ccb24(lVar4,*(int *)(lVar4 + 0x10) + -1,0);
          lVar5 = *(long *)puVar7;
          if (*(int *)(lVar5 + 0xe4) == 0) {
            thunk_FUN_0218fdac(lVar5);
            lVar5 = *(long *)puVar7;
          }
          lVar12 = *(long *)(lVar5 + 0xb8);
          lVar11 = lVar10;
          if (*(short *)(lVar12 + 10) != sVar2) {
            if (*(int *)(lVar5 + 0xe4) == 0) {
              thunk_FUN_0218fdac(lVar5);
              lVar5 = *(long *)puVar7;
              lVar12 = *(long *)(lVar5 + 0xb8);
            }
            if (*(short *)(lVar12 + 8) != sVar2) {
              if (*(int *)(lVar5 + 0xe4) == 0) {
                thunk_FUN_0218fdac(lVar5);
                lVar5 = *(long *)puVar7;
                lVar12 = *(long *)(lVar5 + 0xb8);
              }
              if (*(short *)(lVar12 + 0x18) != sVar2) {
                if (*(int *)(lVar5 + 0xe4) == 0) {
                  thunk_FUN_0218fdac(lVar5);
                  lVar12 = *(long *)(*(long *)puVar7 + 0xb8);
                }
                lVar12 = *(long *)(lVar12 + 0x10);
                lVar5 = lVar12;
                if (((((lVar4 != 0) && (*(int *)(lVar4 + 0x10) != 0)) &&
                     (lVar5 = lVar4, lVar12 != 0)) &&
                    ((*(int *)(lVar12 + 0x10) != 0 && (lVar11 = lVar12, lVar10 != 0)))) &&
                   (*(int *)(lVar10 + 0x10) != 0)) {
                  lVar5 = thunk_FUN_0216c29c(*(int *)(lVar12 + 0x10) + *(int *)(lVar4 + 0x10) +
                                             *(int *)(lVar10 + 0x10),lVar12,lVar10,0);
                  System_String__FillStringChecked_46d2a48(lVar5,0,lVar4);
                  System_String__FillStringChecked_46d2a48
                            (lVar5,*(undefined4 *)(lVar4 + 0x10),lVar12);
                  System_String__FillStringChecked_46d2a48
                            (lVar5,*(int *)(lVar12 + 0x10) + *(int *)(lVar4 + 0x10),lVar10);
                  return lVar5;
                }
                goto System_String__Concat_46c82e0;
              }
            }
          }
          lVar5 = lVar4;
          lVar10 = 0;
System_String__Concat_46c82e0:
          if ((lVar5 == 0) || (iVar3 = *(int *)(lVar5 + 0x10), iVar3 == 0)) {
            if ((lVar11 == 0) || (lVar5 = lVar11, *(int *)(lVar11 + 0x10) == 0)) {
              lVar5 = **(long **)(*(long *)(PTR_DAT_04ca9ac8 + 0x90) + 0xb8);
            }
          }
          else if ((lVar11 != 0) && (*(int *)(lVar11 + 0x10) != 0)) {
            lVar4 = thunk_FUN_0216c29c(*(int *)(lVar11 + 0x10) + iVar3,lVar11,lVar10);
            System_String__FillStringChecked_46d2a48(lVar4,0,lVar5);
            System_String__FillStringChecked_46d2a48(lVar4,iVar3,lVar11);
            lVar5 = lVar4;
          }
          return lVar5;
        }
      }
      thunk_FUN_021985a8(PTR_DAT_04caa3a8);
      uVar8 = thunk_FUN_0216e89c();
      uVar9 = thunk_FUN_021985a8(PTR_DAT_04d12bd8);
      System_ArgumentException___ctor_47b660c(uVar8,uVar9,0);
      goto LAB_04907080;
    }
    thunk_FUN_021985a8(PTR_DAT_04cbe5c8);
    uVar8 = thunk_FUN_0216e89c();
    puVar7 = PTR_DAT_04d12bf0;
  }
  uVar9 = thunk_FUN_021985a8(puVar7);
  System_ArgumentNullException___ctor_47afb54(uVar8,uVar9,0);
LAB_04907080:
  uVar9 = thunk_FUN_021985a8(PTR_DAT_04d12bf8);
                    /* WARNING: Subroutine does not return */
  FUN_021330e8(uVar8,uVar9);
}

