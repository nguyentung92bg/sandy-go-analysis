/* IL2CPP: Dino.BusSand.TweenRunner$$Add
void Dino_BusSand_TweenRunner__Add (Dino_BusSand_Tween_o* t, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.TweenRunner$$Add
   void Dino_BusSand_TweenRunner__Add (Dino_BusSand_Tween_o* t, const MethodInfo* method); */

void Dino_BusSand_TweenRunner__Add_238bcdc(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04caa210;
  if ((bRam0000000004f9c8ae & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04caa210);
    FUN_02132f7c(PTR_DAT_04cbbe28);
    FUN_02132f7c(PTR_DAT_04cbbe20);
    bRam0000000004f9c8ae = 1;
  }
  if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  uVar3 = UnityEngine_Application__get_isPlaying_4351eec(0);
  puVar2 = PTR_DAT_04cbbe20;
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (*(int *)(*(long *)PTR_DAT_04cbbe20 + 0xe4) == 0) {
    thunk_FUN_0218fdac();
  }
  Dino_BusSand_TweenRunner__EnsureInstance_238cc7c();
  lVar5 = *(long *)(*(long *)(*(long *)puVar2 + 0xb8) + 0x10);
  if (lVar5 != 0) {
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar7 = *(long *)PTR_DAT_04cbbe28;
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        puVar4 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *puVar4 = param_1;
      }
      else {
        uVar1 = *(uint *)(lVar5 + 0x18);
        System_Collections_Generic_List_object___EnsureCapacity_3a821d8
                  (lVar5,uVar1 + 1,
                   *(undefined8 *)
                    (*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70)
                                        + 0x20) + 0xc0) + 0x78));
        lVar6 = *(long *)(lVar5 + 0x10);
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_02133224();
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_0213322c();
        }
        puVar4 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
        *puVar4 = param_1;
      }
      if (iRam00000000051c1b10 != 0) {
        FUN_02220bf0(1L << ((ulong)puVar4 >> 0xc & 0x3f),
                     ((ulong)puVar4 >> 0x12 & 0x7fff) * 8 + 0x4ff5ae8);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

