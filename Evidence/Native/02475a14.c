/* IL2CPP: Dino.BusSand.AudioHub$$PlayMusic
void Dino_BusSand_AudioHub__PlayMusic (Dino_BusSand_AudioHub_o* __this, System_String_o* id, float fadeIn, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.AudioHub$$PlayMusic
   void Dino_BusSand_AudioHub__PlayMusic (Dino_BusSand_AudioHub_o* __this, System_String_o* id,
   float fadeIn, const MethodInfo* method); */

void Dino_BusSand_AudioHub__PlayMusic_2375a14(float param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  int iStack_34;
  
                    /* try { // try from 02475a38 to 02575a3f has its CatchHandler @ 02475d00 */
  if ((bRam0000000004f9c7f7 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cab1f0);
                    /* try { // try from 02475a4c to 02575a5b has its CatchHandler @ 02475d0c */
    FUN_02132f7c(PTR_DAT_04cad650);
    FUN_02132f7c(PTR_DAT_04cb1848);
                    /* try { // try from 02475a6c to 02575a83 has its CatchHandler @ 02475d04 */
    FUN_02132f7c(PTR_DAT_04ca9ae8);
    bRam0000000004f9c7f7 = 1;
  }
  iStack_34 = 0;
  lVar4 = Dino_BusSand_AudioHub__Def_2374858(param_2,param_3);
  if (lVar4 == 0) {
    return;
  }
  if (*(long *)(lVar4 + 0x80) == 0) {
    return;
  }
                    /* try { // try from 02475a9c to 02575a9f has its CatchHandler @ 02475cf4 */
  if (*(int *)(*(long *)(lVar4 + 0x80) + 0x18) == 0) {
    return;
  }
  if (*(long *)(param_2 + 0x88) == lVar4) {
    lVar7 = *(long *)(param_2 + 0x78);
                    /* try { // try from 02475ab4 to 02575acb has its CatchHandler @ 02475d08 */
    if (lVar7 == 0) goto LAB_02475c04;
    if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_2 + 0x80)) {
LAB_02475c08:
                    /* WARNING: Subroutine does not return */
      FUN_0213322c();
    }
    lVar7 = *(long *)(lVar7 + (long)(int)*(uint *)(param_2 + 0x80) * 8 + 0x20);
                    /* try { // try from 02475ad0 to 02575adb has its CatchHandler @ 02475cf0 */
    if (lVar7 == 0) goto LAB_02475c04;
    uVar5 = UnityEngine_AudioSource__get_clip_434866c(lVar7,0);
                    /* try { // try from 02475af0 to 02575af7 has its CatchHandler @ 02475ce8 */
    if (*(int *)(*(long *)PTR_DAT_04ca9ae8 + 0xe4) == 0) {
      thunk_FUN_0218fdac(*(long *)PTR_DAT_04ca9ae8);
    }
    uVar6 = UnityEngine_Object__op_Inequality_43c8dec(uVar5,0,0);
    if ((uVar6 & 1) != 0) {
      lVar7 = *(long *)(param_2 + 0x78);
      if (lVar7 == 0) goto LAB_02475c04;
      if (*(uint *)(lVar7 + 0x18) <= *(uint *)(param_2 + 0x80)) goto LAB_02475c08;
      lVar7 = *(long *)(lVar7 + (long)(int)*(uint *)(param_2 + 0x80) * 8 + 0x20);
                    /* try { // try from 02475b30 to 02575b37 has its CatchHandler @ 02475cec */
      if (lVar7 == 0) goto LAB_02475c04;
                    /* try { // try from 02475b38 to 02575cdb has its CatchHandler @ 0247557c */
      uVar6 = UnityEngine_AudioSource__get_isPlaying_4348a28(lVar7,0);
      puVar3 = PTR_DAT_04cab1f0;
      if ((uVar6 & 1) != 0) goto LAB_02475bc8;
      lVar7 = *(long *)PTR_DAT_04cab1f0;
      if (*(int *)(lVar7 + 0xe4) == 0) {
        thunk_FUN_0218fdac();
        lVar7 = *(long *)puVar3;
      }
      if (*(char *)(*(long *)(lVar7 + 0xb8) + 0x2a) == '\0') goto LAB_02475bc8;
    }
  }
  if (*(long *)(param_2 + 0x58) != 0) {
    System_Collections_Generic_Dictionary_object__int___TryGetValue_34ab444
              (*(long *)(param_2 + 0x58),*(undefined8 *)(lVar4 + 0x10),&iStack_34,
               *(undefined8 *)PTR_DAT_04cad650);
    *(long *)(param_2 + 0x88) = lVar4;
    thunk_FUN_02134474((long *)(param_2 + 0x88),lVar4);
    lVar4 = *(long *)(lVar4 + 0x80);
    *(undefined4 *)(param_2 + 0xa4) = 0xbf800000;
    if (lVar4 != 0) {
      iVar1 = *(int *)(lVar4 + 0x18);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iStack_34 / iVar1;
      }
      Dino_BusSand_AudioHub__StartTrack_2376d50(param_2,iStack_34 - iVar2 * iVar1,0);
      *(undefined4 *)(param_2 + 0x94) = 0;
LAB_02475bc8:
      *(undefined4 *)(param_2 + 0x98) = 0x3f800000;
      fVar8 = 1.0 / param_1;
      if (param_1 <= 0.0) {
        fVar8 = 100.0;
      }
      *(float *)(param_2 + 0x9c) = fVar8;
      return;
    }
  }
LAB_02475c04:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

