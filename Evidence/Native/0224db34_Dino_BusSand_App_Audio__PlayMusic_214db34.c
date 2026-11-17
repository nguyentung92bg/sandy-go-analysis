/* IL2CPP: Dino.BusSand.App.Audio$$PlayMusic
void Dino_BusSand_App_Audio__PlayMusic (System_String_o* key, float fadeIn, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.Audio$$PlayMusic
   void Dino_BusSand_App_Audio__PlayMusic (System_String_o* key, float fadeIn, const MethodInfo*
   method); */

void Dino_BusSand_App_Audio__PlayMusic_214db34(float param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  int iStack_34;
  
  puVar3 = PTR_DAT_04cab1f0;
  if ((bRam0000000004f9b7a5 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    bRam0000000004f9b7a5 = 1;
  }
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  if (cRam0000000004f9b88a == '\0') {
    FUN_02132f7c(PTR_DAT_04cab1f0);
    cRam0000000004f9b88a = '\x01';
  }
  lVar4 = *(long *)puVar3;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar4 = *(long *)puVar3;
  }
  lVar4 = **(long **)(lVar4 + 0xb8);
  if (lVar4 == 0) {
    return;
  }
  if ((bRam0000000004f9c7f7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0,param_2,0);
    FUN_02132f7c(PTR_DAT_04cad650);
    FUN_02132f7c(PTR_DAT_04cb1848);
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c7f7 = 1;
  }
  iStack_34 = 0;
  lVar5 = Dino_BusSand_AudioHub__Def_2374858(lVar4,param_2);
  if (lVar5 == 0) {
    return;
  }
  if (*(long *)(lVar5 + 0x80) == 0) {
    return;
  }
  if (*(int *)(*(long *)(lVar5 + 0x80) + 0x18) == 0) {
    return;
  }
  if (*(long *)(lVar4 + 0x88) == lVar5) {
    lVar8 = *(long *)(lVar4 + 0x78);
    if (lVar8 == 0) goto LAB_02475c04;
    if (*(uint *)(lVar8 + 0x18) <= *(uint *)(lVar4 + 0x80)) {
LAB_02475c08:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    lVar8 = *(long *)(lVar8 + (long)(int)*(uint *)(lVar4 + 0x80) * 8 + 0x20);
    if (lVar8 == 0) goto LAB_02475c04;
    uVar6 = UnityEngine_AudioSource__get_clip_434866c(lVar8,0);
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar7 = UnityEngine_Object__op_Inequality_43c8dec(uVar6,0,0);
    if ((uVar7 & 1) != 0) {
      lVar8 = *(long *)(lVar4 + 0x78);
      if (lVar8 == 0) goto LAB_02475c04;
      if (*(uint *)(lVar8 + 0x18) <= *(uint *)(lVar4 + 0x80)) goto LAB_02475c08;
      lVar8 = *(long *)(lVar8 + (long)(int)*(uint *)(lVar4 + 0x80) * 8 + 0x20);
      if (lVar8 == 0) goto LAB_02475c04;
      uVar7 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar8,0);
      puVar3 = PTR_DAT_04cab1f0;
      if ((uVar7 & 1) != 0) goto LAB_02475bc8;
      lVar8 = *(long *)PTR_DAT_04cab1f0;
      if (*(int *)(lVar8 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar8 = *(long *)puVar3;
      }
      if (*(char *)(*(long *)(lVar8 + 0xb8) + 0x2a) == '\0') goto LAB_02475bc8;
    }
  }
  if (*(long *)(lVar4 + 0x58) != 0) {
    System_Collections_Generic_Dictionary_object__int___TryGetValue_34ab444
              (*(long *)(lVar4 + 0x58),*(undefined8 *)(lVar5 + 0x10),&iStack_34,
               *(undefined8 *)PTR_DAT_04cad650);
    *(long *)(lVar4 + 0x88) = lVar5;
    thunk_FUN_02134474((long *)(lVar4 + 0x88),lVar5);
    lVar5 = *(long *)(lVar5 + 0x80);
    *(undefined4 *)(lVar4 + 0xa4) = 0xbf800000;
    if (lVar5 != 0) {
      iVar1 = *(int *)(lVar5 + 0x18);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iStack_34 / iVar1;
      }
      Dino_BusSand_AudioHub__StartTrack_2376d50(lVar4,iStack_34 - iVar2 * iVar1,0);
      *(undefined4 *)(lVar4 + 0x94) = 0;
LAB_02475bc8:
      *(undefined4 *)(lVar4 + 0x98) = 0x3f800000;
      fVar9 = 1.0 / param_1;
      if (param_1 <= 0.0) {
        fVar9 = 100.0;
      }
      *(float *)(lVar4 + 0x9c) = fVar9;
      return;
    }
  }
LAB_02475c04:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

