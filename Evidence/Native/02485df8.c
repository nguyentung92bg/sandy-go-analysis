/* IL2CPP: Dino.BusSand.GameAudio$$Tone
UnityEngine_AudioClip_o* Dino_BusSand_GameAudio__Tone (System_String_o* name, float seconds, System_Func_float__float__o* f, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Dino.BusSand.GameAudio$$Tone
   UnityEngine_AudioClip_o* Dino_BusSand_GameAudio__Tone (System_String_o* name, float seconds,
   System_Func_float__float__o* f, const MethodInfo* method); */

long Dino_BusSand_GameAudio__Tone_2385df8(float param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  float *pfVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 uVar15;
  
  puVar4 = PTR_DAT_04caadd0;
  if ((bRam0000000004f9c871 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04caadd0);
    bRam0000000004f9c871 = 1;
  }
  fVar3 = _UNK_00e20304;
  uVar2 = 0x80000000;
  if (param_1 * _UNK_00e20304 != INFINITY) {
    uVar2 = (int)(param_1 * _UNK_00e20304);
  }
  uVar13 = (ulong)uVar2;
  lVar8 = FUN_02133068(*(undefined8 *)puVar4,uVar13);
  if (0 < (int)uVar2) {
    if (param_3 == 0) {
LAB_02485f74:
                    /* WARNING: Subroutine does not return */
      FUN_02133224();
    }
    uVar14 = 0;
    do {
      uVar15 = (**(code **)(param_3 + 0x18))
                         ((float)(int)uVar14 / fVar3,*(undefined8 *)(param_3 + 0x40),
                          *(undefined8 *)(param_3 + 0x28));
      if (lVar8 == 0) goto LAB_02485f74;
      if (*(uint *)(lVar8 + 0x18) <= uVar14) goto LAB_02485f70;
      *(undefined4 *)(lVar8 + 0x20 + uVar14 * 4) = uVar15;
      uVar14 = uVar14 + 1;
    } while (uVar13 != uVar14);
    if (0 < (int)uVar2) {
      uVar13 = uVar13 - 1;
      uVar1 = *(uint *)(lVar8 + 0x18);
      lVar11 = 0;
      if (0xc6 < uVar13) {
        uVar13 = 199;
      }
      pfVar12 = (float *)(lVar8 + (ulong)uVar2 * 4 + 0x1c);
      do {
        if (uVar1 <= uVar2 - 1) {
LAB_02485f70:
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        iVar9 = (int)lVar11;
        lVar11 = lVar11 + 1;
        *pfVar12 = ((float)iVar9 / 200.0) * *pfVar12;
        pfVar12 = pfVar12 + -1;
      } while (uVar13 + 1 != lVar11);
    }
  }
  if (*(int *)(*(long *)PTR_DAT_04cad568 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_GameAudio__Normalize_2385d70(_UNK_00e200f8,lVar8);
  puVar4 = PTR_DAT_04cad568;
  if ((bRam0000000004f9c872 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad568);
    FUN_02132f7c(PTR_DAT_04cbbc10);
    FUN_02132f7c(PTR_DAT_04cbbc18);
    bRam0000000004f9c872 = 1;
  }
  lVar11 = *(long *)puVar4;
  if (*(int *)(lVar11 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
    lVar11 = *(long *)puVar4;
  }
  plVar6 = (long *)FUN_02132f94(lVar11);
  puVar5 = PTR_DAT_04cbbc18;
  if (*plVar6 == 0) {
    if ((lVar8 != 0) &&
       (lVar11 = UnityEngine_AudioClip__Create_4347ab8
                           (param_2,*(undefined4 *)(lVar8 + 0x18),1,0xac44,0,0), lVar11 != 0)) {
      UnityEngine_AudioClip__SetData_4347760(lVar11,lVar8,0,0);
      return lVar11;
    }
  }
  else {
    lVar11 = *(long *)puVar4;
    if (*(int *)(lVar11 + 0xe4) == 0) {
      thunk_FUN_0218fdac();
      lVar11 = *(long *)puVar4;
    }
    plVar6 = (long *)FUN_02132f94(lVar11);
    lVar11 = *plVar6;
    System_ValueTuple_object__object____ctor_30ee190
              (&stack0xffffffffffffffc0,param_2,lVar8,*(undefined8 *)puVar5);
    if (lVar11 != 0) {
      lVar8 = *(long *)(lVar11 + 0x10);
      lVar10 = *(long *)PTR_DAT_04cbbc10;
      *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
      if (lVar8 != 0) {
        uVar2 = *(uint *)(lVar11 + 0x18);
        if (uVar2 < *(uint *)(lVar8 + 0x18)) {
          lVar8 = lVar8 + (long)(int)uVar2 * 0x10;
          *(uint *)(lVar11 + 0x18) = uVar2 + 1;
          puVar7 = (undefined8 *)(lVar8 + 0x20);
          *puVar7 = 0;
          *(undefined8 *)(lVar8 + 0x28) = 0;
          thunk_FUN_02134474(puVar7,0);
        }
        else {
          System_Collections_Generic_List_ValueTuple_object__object____AddWithResize_39bc1a4
                    (lVar11,0,0,*(undefined8 *)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
        }
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

