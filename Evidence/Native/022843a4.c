/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$Rank
int32_t Dino_BusSand_App_UI_KitPrefabs__Rank (UnityEngine_Component_o* c, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.KitPrefabs$$Rank
   int32_t Dino_BusSand_App_UI_KitPrefabs__Rank (UnityEngine_Component_o* c, const MethodInfo*
   method); */

undefined4 Dino_BusSand_App_UI_KitPrefabs__Rank_21843a4(long *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  long lVar3;
  
  if ((bRam0000000004f9b939 & 1) == 0) {
    FUN_02132f7c(PTR_DAT_04cad838);
    FUN_02132f7c(PTR_DAT_04cad840);
    bRam0000000004f9b939 = 1;
  }
  if (param_1 == (long *)0x0) {
    uVar2 = 1;
  }
  else {
    lVar3 = *param_1;
    if (lVar3 == *(long *)PTR_DAT_04cad838) {
      uVar2 = 3;
    }
    else {
      uVar2 = 1;
      bVar1 = *(byte *)(*(long *)PTR_DAT_04cad840 + 0x130);
      if ((bVar1 <= *(byte *)(lVar3 + 0x130)) &&
         (uVar2 = 1,
         *(long *)(*(long *)(lVar3 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)PTR_DAT_04cad840)) {
        uVar2 = 2;
      }
    }
  }
  return uVar2;
}

