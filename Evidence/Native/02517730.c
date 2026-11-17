/* IL2CPP: Dino.BusSand.Core.SandGrid$$TrySpawn
bool Dino_BusSand_Core_SandGrid__TrySpawn (Dino_BusSand_Core_SandGrid_o* __this, int32_t x, int32_t y, uint8_t color, int8_t shade, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.Core.SandGrid$$TrySpawn
   bool Dino_BusSand_Core_SandGrid__TrySpawn (Dino_BusSand_Core_SandGrid_o* __this, int32_t x,
   int32_t y, uint8_t color, int8_t shade, const MethodInfo* method); */

undefined8
Dino_BusSand_Core_SandGrid__TrySpawn_2417730
          (long param_1,uint param_2,uint param_3,byte param_4,undefined1 param_5)

{
  long lVar1;
  long lVar2;
  byte *pbVar3;
  
  if (((int)(param_3 | param_2) < 0) || (*(int *)(param_1 + 0x10) <= (int)param_2)) {
    return 0;
  }
  if (param_4 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x14) <= (int)param_3) {
    return 0;
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    param_2 = param_2 + *(int *)(param_1 + 0x10) * param_3;
    if (param_2 < *(uint *)(lVar2 + 0x18)) {
      pbVar3 = (byte *)(lVar2 + (int)param_2 + 0x20);
      if (*pbVar3 != 0) {
        return 0;
      }
      *pbVar3 = param_4;
      lVar2 = *(long *)(param_1 + 0x40);
      if (lVar2 == 0) goto LAB_0251784c;
      if (param_2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined1 *)(lVar2 + (int)param_2 + 0x20) = param_5;
        lVar2 = *(long *)(param_1 + 0x48);
        if (lVar2 == 0) goto LAB_0251784c;
        if (param_3 < *(uint *)(lVar2 + 0x18)) {
          lVar2 = lVar2 + (long)(int)param_3 * 4;
          *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
          lVar2 = *(long *)(param_1 + 0x50);
          *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
          if (lVar2 == 0) goto LAB_0251784c;
          if ((uint)param_4 < *(uint *)(lVar2 + 0x18)) {
            lVar2 = lVar2 + (ulong)param_4 * 4;
            lVar1 = *(long *)(param_1 + 0x58);
            *(int *)(lVar2 + 0x20) = *(int *)(lVar2 + 0x20) + 1;
            if (lVar1 == 0) goto LAB_0251784c;
            if (param_3 < *(uint *)(lVar1 + 0x18)) {
              *(int *)(lVar1 + (long)(int)param_3 * 4 + 0x20) = *(int *)(param_1 + 0x60) + 1;
              *(undefined2 *)(param_1 + 0x74) = 1;
              *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
              return 1;
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_0213322c();
  }
LAB_0251784c:
                    /* WARNING: Subroutine does not return */
  FUN_02133224();
}

